/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-lan <cle-lan@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:37:28 by cle-lan           #+#    #+#             */
/*   Updated: 2020/12/03 11:50:00 by cle-lan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*haystackcpy;

	i = 0;
	haystackcpy = (char *)haystack;
	if (*needle == 0)
		return (haystackcpy);
	while (haystackcpy[i] && i < len)
	{
		j = 0;
		while (haystackcpy[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (needle[j] == 0)
				return (&haystackcpy[i]);
		}
		i++;
	}
	return (0);
}
