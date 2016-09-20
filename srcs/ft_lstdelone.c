/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <arthur.giuliano@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 22:36:54 by agiulian          #+#    #+#             */
/*   Updated: 2016/09/20 22:50:28 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	//t_list *lst;

//	lst = *alst;
	//if (lst)
//	{
		del(*alst, (*alst)->content_size);
	//	free (lst);
	//	free((void*) *alst);
		*alst = NULL;
//	}
}
