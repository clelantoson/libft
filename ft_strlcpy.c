/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-lan <cle-lan@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 17:33:18 by cle-lan           #+#    #+#             */
/*   Updated: 2020/12/03 12:45:41 by cle-lan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size <= 0)
		return (ft_strlen(src));
	if ((dest == NULL) && (src == NULL))
		return (0);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
