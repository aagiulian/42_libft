/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <arthur.giuliano@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 17:54:21 by agiulian          #+#    #+#             */
/*   Updated: 2016/09/17 20:28:54 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_fillstr(unsigned int save, int size, int i, char *s)
{
	while (size > 0)
	{
		s[i] = (save / size) + '0';
		save %= size;
		size /= 10;
		i++;
	}
	s[i] = '\0';
	return (s);
}

char		*ft_itoa(int n)
{
	unsigned int	save;
	int				size;
	int				i;
	char			*s;

	size = 1;
	i = 0;
	save = (n < 0) ? (-n) : n;
	while (((save /= 10) > 0))
	{
		size *= 10;
		i++;
	}
	s = (char*)malloc(sizeof(char) * i + 1);
	save = (n < 0) ? (-n) : (n);
	i = 0;
	if (n < 0)
	{
		s[i] = '-';
		i++;
	}
	s = ft_fillstr(save, size, i, s);
	return (s);
}
