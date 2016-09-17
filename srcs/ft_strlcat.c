/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <arthur.giuliano@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 20:39:05 by agiulian          #+#    #+#             */
/*   Updated: 2016/09/17 22:08:57 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		 i;
	size_t		 j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (j + i + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (j != size)
		dst[i + j] = '\0';
	if (j > size)
		return (size + ft_strlen(src));
	return (j + ft_strlen(src));
}
