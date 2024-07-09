/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburki <aburki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:35:25 by aburki            #+#    #+#             */
/*   Updated: 2024/05/24 17:03:25 by aburki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*cal;
	size_t		i;

	i = count * size;
	cal = malloc(i);
	if (cal == 0)
		return (0);
	ft_memset(cal, 0, i);
	return (cal);
}
