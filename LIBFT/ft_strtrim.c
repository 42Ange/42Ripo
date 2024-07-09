/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburki <aburki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:55:03 by aburki            #+#    #+#             */
/*   Updated: 2024/05/29 17:03:47 by aburki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	unsigned int	i;
	unsigned int	end;
	char			*result;

	end = ft_strlen(str);
	i = 0;
	if (end == 0)
	{
		result = (char *)malloc(sizeof(char));
		if (result)
			result[0] = '\0';
		return (result);
	}
	while (str[i] && ft_strchr(set, str[i]))
		i++;
	while (str[end - 1] && ft_strchr(set, str[end - 1]) && end > i)
		end--;
	result = (char *)malloc(sizeof(char) * (end - i + 1));
	if (result)
		ft_strlcpy(result, &str[i], end - i + 1);
	return (result);
}
/*
int	main(void)
{
	char const *str = "";
	char const *set = "";
	char *trimmed = ft_strtrim(str, set);
	if (trimmed)
	{
		printf("%s\n", trimmed);
		free(trimmed);
	}
	return (0);
}*/
