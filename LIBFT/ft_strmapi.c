/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburki <aburki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:08:47 by aburki            #+#    #+#             */
/*   Updated: 2024/05/29 16:26:47 by aburki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	if (!str || !f)
		return (0);
	i = 0;
	result = ft_strdup(str);
	if (!result)
		return (NULL);
	while (result[i])
	{
		result[i] = f(i, result[i]);
		i++;
	}
	return (result);
}
