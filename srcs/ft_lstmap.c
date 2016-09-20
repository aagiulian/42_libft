/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <arthur.giuliano@student.42.fr.   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 23:03:02 by agiulian          #+#    #+#             */
/*   Updated: 2016/09/20 23:20:27 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list*	ft_lstmap(t_list *lst, t_list* (*f)(t_list *elem))
{
	t_list	*lst_n;
	t_list	*begin_lst;

	lst_n = f(lst);;
	begin_lst = lst_n;
	if (lst->next)
	{
		lst = lst->next;
		while (lst)
		{
			lst_n->next = f(lst->next);
			lst_n = lst_n->next;
			lst = lst->next;
		}
	}
	return (begin_lst);
}
