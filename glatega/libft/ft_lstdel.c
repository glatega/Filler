/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 01:44:17 by glatega           #+#    #+#             */
/*   Updated: 2018/06/03 05:51:14 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*list;
	t_list	*nxt_list;

	list = *alst;
	while (list)
	{
		nxt_list = list->next;
		del(list->content, list->content_size);
		free(list);
		list = nxt_list;
	}
	list = NULL;
	nxt_list = NULL;
	*alst = NULL;
}
