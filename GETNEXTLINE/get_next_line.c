/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburki <aburki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:59:03 by aburki            #+#    #+#             */
/*   Updated: 2024/07/05 13:17:25 by aburki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	verif_end(char **str)
{
	if (*str[0] == '\0')
	{
		free(*str);
		*str = NULL;
	}
}

char	*ft_storage(int fd, char *str)
{
	char	*buff;
	int		bytes;

	bytes = 1;
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	while (!ft_strchr(str, '\n') && bytes != 0)
	{
		bytes = (read(fd, buff, BUFFER_SIZE));
		if (bytes == -1)
		{
			free(buff);
			free(str);
			return (NULL);
		}
		buff[bytes] = '\0';
		str = ft_strjoin(str, buff);
	}
	verif_end(&str);
	free(buff);
	return (str);
}

char	*ft_get_line(char *str)
{
	int		i;
	char	*line;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		line[i] = str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_next(char *str)
{
	int		i;
	int		j;
	char	*newstr;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\n' && str[i])
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	newstr = malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!newstr)
		return (free(str), NULL);
	i++;
	while (str[i])
		newstr[j++] = str[i++];
	newstr[j] = '\0';
	free(str);
	return (newstr);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = ft_storage(fd, str);
	if (!str)
	{
		free (str);
		return (NULL);
	}
	line = ft_get_line(str);
	if (!line)
	{
		free(str);
		return (NULL);
	}
	str = ft_next(str);
	return (line);
}

// #include <string.h>

// int main() {
//     int fd = open("test.txt", O_RDWR);
//     if (fd == -1) {
//         perror("Error opening file");
//         return EXIT_FAILURE;
//     }

//     int iTest = 0;
//     char *line = get_next_line(fd);
//     printf("Actual  : %s\n", line);
//     free(line);
// }
