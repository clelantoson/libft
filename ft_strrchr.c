/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-lan <cle-lan@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 15:20:31 by cle-lan           #+#    #+#             */
/*   Updated: 2020/12/20 01:51:25 by cle-lan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	while (s[len] != (char)c && (len > 0) && s > 0)
		len--;
	if (s[len] == (char)c)
		return ((char *)s + len);
	else
		return (NULL);
}