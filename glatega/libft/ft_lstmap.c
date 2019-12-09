/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 06:18:47 by glatega           #+#    #+#             */
/*   Updated: 2018/06/05 18:35:11 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*prev_list;
	t_list	*f_list;
	t_list	*start_list;

	prev_list = NULL;
	while (lst)
	{
		f_list = f(lst);
		if (prev_list)
			prev_list->next = f_list;
		else
			start_list = f_list;
		prev_list = f_list;
		lst = lst->next;
	}
	return (start_list);
}
