/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-lan <cle-lan@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 19:16:01 by cle-lan           #+#    #+#             */
/*   Updated: 2020/12/10 10:44:03 by cle-lan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int			count_words(char *s, char c)
{
	size_t			i;
	int				count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static	char		**free_memory(char **tab)
{
	free(tab);
	return (NULL);
}

char				**ft_split(char const *s, char c)
{
	size_t			i;
	char			**tabtabs;
	unsigned int	start;
	int				word;
	int				wordlen;

	if (s == NULL)
		return (NULL);
	i = 0;
	word = 0;
	wordlen = count_words((char *)s, c);
	if (!(tabtabs = (char **)malloc(sizeof(char *) * wordlen + 1)))
		return (NULL);
	while (s[i] && word < wordlen)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (!(tabtabs[word++] = ft_substr(s, start, i - start)))
			return (free_memory(tabtabs));
	}
	tabtabs[word] = 0;
	return (tabtabs);
}
