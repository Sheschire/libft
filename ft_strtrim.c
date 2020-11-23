/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 21:54:05 by tlemesle          #+#    #+#             */
/*   Updated: 2020/11/23 15:06:10 by tlemesle         ###   ########.fr       */
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

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	while (*s1 && is_set(*s1, set))
		s1++;
	size = ft_strlen(s1);
	while (size && is_set(s1[size], set))
		size--;
	trim = ft_substr((char *)s1, 0, size + 1);
	if (trim == NULL)
		return (0);
	return (trim);
}
