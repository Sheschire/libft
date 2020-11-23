/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:26:36 by tlemesle          #+#    #+#             */
/*   Updated: 2020/11/23 11:07:36 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	if (nmemb == 0)
		return (0);
	ptr = malloc(sizeof(size * nmemb));
	if (ptr == NULL)
		return (0);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
