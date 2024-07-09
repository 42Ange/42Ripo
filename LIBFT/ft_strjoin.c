/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburki <aburki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:01:24 by aburki            #+#    #+#             */
/*   Updated: 2024/05/29 15:38:44 by aburki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*box;

	if (!s1 || !s2)
		return (0);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	box = malloc(sizeof(char) * (lens1 + lens2) + 1);
	if (box == 0)
		return (0);
	ft_strlcpy(box, s1, lens1 + lens2 + 1);
	ft_strlcat(box, s2, lens1 + lens2 + 1);
	return (box);
}
/*
int	main(void)
{
	const char *str = "Salut ";
	const char *str2 = "toi";
	
	printf("%s\n", ft_strjoin(str, str2));
	return (0);
}*/