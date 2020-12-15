/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-lan <cle-lan@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:40:49 by cle-lan           #+#    #+#             */
/*   Updated: 2020/12/04 17:38:14 by cle-lan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	dstlen;

	i = 0;
	j = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	while (dst[i])
		i++;
	while (src[j] && (j + i) < dstsize - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (dstsize < dstlen)
		return (srclen + dstsize);
	if (i < dstsize)
		dst[i + j] = '\0';
	return (i + srclen);
}
