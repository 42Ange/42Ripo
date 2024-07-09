/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburki <aburki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:34:44 by aburki            #+#    #+#             */
/*   Updated: 2024/07/05 13:16:46 by aburki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# ifndef FDMAX
#  define FDMAX 1025
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*ft_storage(int fd, char *str);
char	*ft_get_line(char *str);
char	*ft_next(char *str);
int		ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(const char *s, int c);
#endif