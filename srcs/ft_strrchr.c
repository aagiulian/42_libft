/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <arthur.giuliano@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 13:28:52 by agiulian          #+#    #+#             */
/*   Updated: 2016/09/18 20:07:02 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	long int	i;

	i = ft_strlen(s);
	if (s[i] == c)
		return ((char*)s + i);
	while (i >= 0)
	{
		if (s[i] == c) 
			return ((char*)s + i);
		i--;
	}
	return (NULL);
}
