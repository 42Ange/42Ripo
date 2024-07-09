/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburki <aburki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:01:21 by aburki            #+#    #+#             */
/*   Updated: 2024/05/30 13:15:11 by aburki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	i = 0;
	slen = ft_strlen(src);
	while (dest[i] && i < n)
		i++;
	dlen = i;
	if (i == n)
		return (n + slen);
	if (slen < n - dlen)
		ft_memcpy(dest + dlen, src, slen + 1);
	else
	{
		ft_memcpy(dest + dlen, src, n - dlen - 1);
		dest[n - 1] = '\0';
	}
	return (dlen + slen);
}
/*
int	main(void)
{
	
	char dest[200];
	printf("%zu\n", ft_strlcat(dest, "123", 0));
	printf("%s\n", dest);
	return (0);
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
 	char buff1[0xF00] = "there is no stars in the sky";
 	char buff2[0xF00] = "there is no stars in the sky";
 	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
 
 	printf("%zu\n", strlcat(buff1, str, max));
 	printf("%zu\n", ft_strlcat(buff2, str, max));
	return (0);
}*/
