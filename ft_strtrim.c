/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 21:54:05 by tlemesle          #+#    #+#             */
/*   Updated: 2020/11/23 12:08:30 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_set(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char			*trim;
	size_t			size;
	unsigned int	i;

	i = 0;
	while (s1[i] && is_set(s1[i], set))
		i++;
	s1 += i;
	size = ft_strlen(s1);
	while ((s1[size - 1] != s1[0]) && is_set(s1[size - 1], set))
		size--;
	trim = ft_substr(s1, 0, size);
	return (trim);
}
