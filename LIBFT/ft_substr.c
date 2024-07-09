/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburki <aburki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:00:57 by aburki            #+#    #+#             */
/*   Updated: 2024/05/30 13:13:33 by aburki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t end)
{
	char			*res;
	unsigned int	len1;
	unsigned int	len2;

	if (!str)
		return (0);
	len1 = (int)end;
	len2 = ft_strlen(str);
	if (start > len2)
		return (ft_strdup(""));
	if (start > len2)
		len1 = 0;
	if (ft_strlen(str + start) < end)
		len1 = ft_strlen(str + start);
	res = ft_calloc(len1 + 1, sizeof(char));
	if (!res)
		return (0);
	ft_strlcpy(res, &((char *)str)[start], len1 + 1);
	return (res);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%s\n", ft_substr("hola", 4294967295, 0));
	return (0);
}*/