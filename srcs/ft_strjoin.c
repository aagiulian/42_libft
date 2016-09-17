/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <arthur.giuliano@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 18:05:36 by agiulian          #+#    #+#             */
/*   Updated: 2016/09/17 18:20:22 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1,char const *s2)
{
	char	*s_n;

	s_n = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (s_n == NULL)
		return (NULL);
	while (*s1)
		*s_n++ = *s1++;
	while (*s2)
		*s_n++ = *s2++;
	*s_n = '\0';
	return (s_n);
}
