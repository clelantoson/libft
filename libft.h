/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-lan <cle-lan@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:29:43 by cle-lan           #+#    #+#             */
/*   Updated: 2020/11/23 15:05:11 by cle-lan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <string.h>

size_t 			ft_strlen(const char *str);
int				ft_isalpha(int c);
int 			ft_isdigit(int c);
int 			ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *str);
size_t	 		ft_strlcat(char *dst, const char *src, size_t dstsize);
unsigned int 	ft_strlcpy(char *dest, char *src, unsigned int size);
void			*ft_memset(void *b, int c, size_t len);

#endif
