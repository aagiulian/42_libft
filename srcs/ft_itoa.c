/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <arthur.giuliano@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 17:54:21 by agiulian          #+#    #+#             */
/*   Updated: 2016/09/16 18:48:54 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int n)
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

int		main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}
