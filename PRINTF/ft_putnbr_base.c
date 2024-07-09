/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburki <aburki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:16:28 by aburki            #+#    #+#             */
/*   Updated: 2024/06/10 11:59:06 by aburki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long n, char *base)
{
	int	count;
	int	exa;

	exa = 16;
	count = 0;
	if (n >= 16)
		count += ft_putnbr_base(n / exa, base);
	count += ft_putchar(base[n % exa]);
	return (count);
}
