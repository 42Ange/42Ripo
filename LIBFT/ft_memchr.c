/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburki <aburki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:01:58 by aburki            #+#    #+#             */
/*   Updated: 2024/05/24 17:49:01 by aburki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *p, int c, size_t n)
{
	size_t		i;
	const char	*pp = p;

	i = 0;
	while (i < n)
	{
		if (pp[i] == (char)c)
			return ((void *)&pp[i]);
		i++;
	}
	return (0);
}
