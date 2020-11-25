/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-lan <cle-lan@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:18:12 by cle-lan           #+#    #+#             */
/*   Updated: 2020/11/25 14:09:56 by cle-lan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dstcpy;
	const char	*srccpy;

	dstcpy = (char *)dst;
	srccpy = (const char *)src;
	i = 0;
	if ((dst == NULL) && (src == NULL))
		return (NULL);
	if (src <= dst)
	{
		while (len > 0)
		{
			dstcpy[len - 1] = srccpy[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
   	 	{
			dstcpy[i] = srccpy[i];
			i++;
		}
	}
	return (dstcpy);
}
