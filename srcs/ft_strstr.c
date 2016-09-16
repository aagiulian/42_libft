/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <arthur.giuliano@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 20:52:44 by agiulian          #+#    #+#             */
/*   Updated: 2016/09/13 21:04:22 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *big, const char *little)
{
	unsigned int i;
	unsigned int j;
	unsigned int len;

	j = 0;
	len = ft_strlen(little);
	if (len == 0)
		return (big);
	while (big[j])
	{
		i = 0;
		while (big[j + i] == litle[i])
		{
			i++;
			if (i == len - 1)
				return (big + j);
		}
		j++;
	}
	return (NULL);
}
