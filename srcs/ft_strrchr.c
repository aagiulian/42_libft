/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <arthur.giuliano@student.42       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 13:28:52 by agiulian          #+#    #+#             */
/*   Updated: 2016/09/14 13:45:57 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s) + 1;
	if (s[i] == c)
		return ((char*)s + i);
	while (i >= 0)
	{
		if (s[i] == c) 
			return ((char*)s + 1);
		i--;
	}
	return (NULL);
}
