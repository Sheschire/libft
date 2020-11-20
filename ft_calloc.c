/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:26:36 by tlemesle          #+#    #+#             */
/*   Updated: 2020/11/19 16:50:02 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	if (nmemb == 0 || size == 0)
		return (0);
	if (!(ptr = malloc(sizeof(size * nmemb))))
		return (0);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
