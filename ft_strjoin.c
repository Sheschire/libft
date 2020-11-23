/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 19:50:48 by tlemesle          #+#    #+#             */
/*   Updated: 2020/11/23 10:51:14 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	int		j;

	j = 0;
	i = 0;
	res = (char *)malloc(sizeof((*res) * (ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (res == NULL)
		return (0);
	while (i < ft_strlen(s1))
	{
		res[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		res[j] = s2[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}
