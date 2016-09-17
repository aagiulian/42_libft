/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <arthur.giuliano@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 23:46:21 by agiulian          #+#    #+#             */
/*   Updated: 2016/09/16 23:51:45 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*s1_c;
	const char	*s2_c;

	s1_c = (const char*)s1;
	s2_c = (const char*)s2;
	i = 0;
	while (s1_c && s2_c && i < n)
	{
		if ((unsigned char)s1_c[i] != (unsigned char)s2_c[i])
			return ((unsigned char)s1_c[i] - (unsigned char)s2_c[i]);
		i++;
	}
	return (0);
}
