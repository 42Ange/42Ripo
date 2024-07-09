/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburki <aburki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:01:49 by aburki            #+#    #+#             */
/*   Updated: 2024/05/30 11:39:39 by aburki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!src && !dest)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			((char *)dest)[n -1] = ((char *)src)[n - 1];
			n--;
		}
	}
	else
		ft_memcpy((char *)dest, (char *)src, n);
	return ((char *)dest);
}
