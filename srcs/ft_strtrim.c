/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <arthur.giuliano@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 18:23:27 by agiulian          #+#    #+#             */
/*   Updated: 2016/09/17 22:59:34 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*s_n;

	i = 0;
	j = ft_strlen(s) - 1;
	k = 0;
	while (s[i] == '\n' || s[i] == ' ' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return ("");
	while (s[j] == '\n' || s[j] == ' ' || s[j] == '\t')
		j--;
	s_n = ft_strnew(j - i + 1);
	if (s_n == NULL)
		return (NULL);
	while (k < j - i + 1)
	{
		s_n[k] = s[i + k];
		k++;
	}
	s_n[k] = '\0';
	return (s_n);
}
