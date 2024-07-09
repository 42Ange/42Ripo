/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburki <aburki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 12:07:32 by aburki            #+#    #+#             */
/*   Updated: 2024/07/09 10:54:27 by aburki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char *format, va_list args, int i)
{
	int	len;

	len = 0;
	if (format[i + 1] == 'd' || format[i + 1] == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (format[i + 1] == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format[i + 1] == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format[i +1] == 'u')
		len += ft_putnbr_uns(va_arg(args, unsigned int));
	else if (format[i + 1] == 'p')
		len += ft_print_ptr(va_arg(args, void *), "0123456789abcdef");
	else if (format[i + 1] == 'x')
		len += ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef");
	else if (format[i + 1] == 'X')
		len += ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (format[i + 1] == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	len = 0;
	i = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_format(format, args, i);
			i++;
		}
		else
			len += ft_putchar(format[i]);
	i++;
	}
	va_end(args);
	return (len);
}

 #include <stdio.h>

 int main(void)
 {
 	ft_printf("%d %", 25);
 	printf("%d %", 25);
 	return 0;
 }