/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 12:10:16 by tlemesle          #+#    #+#             */
/*   Updated: 2020/11/19 17:05:33 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
}

static int		ft_wordcount(char const *s, char c)
{
	int		nb_word;
	int		i;

	i = 0;
	nb_word = 0;
	if (s[i] != c && s[i])
		nb_word++;
	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
			if (s[i] != c && s[i])
				nb_word++;
		}
		i++;
	}
	return (nb_word);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	int		nb_word;
	size_t	wordlen;
	int		j;

	if (!s)
		return (0);
	nb_word = ft_wordcount(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (nb_word + 1))))
		return (0);
	j = 0;
	while (nb_word--)
	{
		while (*s == c && *s)
			s++;
		wordlen = ft_wordlen(s, c);
		tab[j] = ft_substr(s, 0, wordlen);
		j++;
		s += wordlen;
	}
	tab[j] = NULL;
	return (tab);
}
