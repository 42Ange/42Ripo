/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburki <aburki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:01:46 by aburki            #+#    #+#             */
/*   Updated: 2024/05/27 13:25:05 by aburki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int valeur, size_t taille)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)ptr;
	while (i < taille)
	{
		*p = (unsigned char)valeur;
		p++;
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char	str[4];

	f_memset(str, '4', 4);
	printf("str apres memset : %s\n", str);
	return (0);
}*/
