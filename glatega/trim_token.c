/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_token.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 11:47:54 by glatega           #+#    #+#             */
/*   Updated: 2018/07/31 15:26:15 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		trim_token(t_grid *t)
{
	int		s;
	int		e;
	int		h;
	int		w;
	char	**tr;

	t->offset_y = f_row(*t);
	e = l_row(*t);
	h = (e - t->offset_y) + 1;
	t->offset_x = f_col(*t);
	e = l_col(*t);
	w = (e - t->offset_x) + 1;
	tr = (char**)ft_memalloc(sizeof(char*) * h);
	s = 0;
	t->h = h;
	t->w = w;
	while (s < h)
	{
		tr[s] = ft_strnew(w);
		tr[s] = ft_strncpy(tr[s], &(t->data[t->offset_y + s][t->offset_x]), w);
		s++;
	}
	free_grid(t);
	t->data = tr;
}
