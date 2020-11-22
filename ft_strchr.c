/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 08:59:36 by tlemesle          #+#    #+#             */
/*   Updated: 2020/11/21 13:28:15 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if (!s || !c)
		return (0);
	while (str)
	{
		if (*str == (unsigned char)c)
			return (str);
		if (*str == '\0')
			return (0);
		str++;
	}
	return (0);
}
