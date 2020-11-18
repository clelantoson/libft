/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-lan <cle-lan@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 09:58:32 by cle-lan           #+#    #+#             */
/*   Updated: 2020/11/18 18:21:18 by cle-lan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
