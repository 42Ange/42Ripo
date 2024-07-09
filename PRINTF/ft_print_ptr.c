/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburki <aburki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:44:15 by aburki            #+#    #+#             */
/*   Updated: 2024/06/07 16:21:29 by aburki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr, char *base)
{
	unsigned long	adresse;
	int				count;

	count = 0;
	adresse = (unsigned long)ptr;
	if (!ptr)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_putnbr_base(adresse, base);
	return (count);
}

/*#include <stdio.h>

int	main(void)
{
	char *p;
	ft_printf("%d\n", ft_printf("%p\n", p));
	ft_printf("%d\n", printf("%p\n", p));
	return (0);
}*/