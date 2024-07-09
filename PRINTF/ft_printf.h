/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburki <aburki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:27:46 by aburki            #+#    #+#             */
/*   Updated: 2024/06/09 14:11:52 by aburki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_printf(const char *format, ...);
int	ft_putnbr(long n);
int	ft_putstr(char *str);
int	ft_strlen(char *str);
int	ft_putnbr_base(unsigned long n, char *base);
int	ft_putnbr_uns(unsigned int n);
int	ft_print_ptr(void *ptr, char *base);

#endif