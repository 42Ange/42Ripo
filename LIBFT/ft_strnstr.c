/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburki <aburki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:57:56 by aburki            #+#    #+#             */
/*   Updated: 2024/05/24 18:16:05 by aburki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	int		j;

	i = 0;
	if (ft_strlen(to_find) < 1)
		return ((char *)str);
	while (str[i] && i < n)
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && i + j < n)
			{
				if (to_find[j + 1] == '\0')
				{
					return ((char *)str + i);
				}
				j++;
			}
		}
		i++;
	}
	return (0);
}
