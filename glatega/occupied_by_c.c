/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   occupied_by_c.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:59:24 by glatega           #+#    #+#             */
/*   Updated: 2018/07/31 14:59:39 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int			occupied_by_c(t_game *filler, int x, int y, char c)
{
	int		h;
	int		w;
	int		cnt;

	cnt = 0;
	h = 0;
	while (h < (filler->token).h)
	{
		w = 0;
		while (w < (filler->token).w)
		{
			if ((filler->token).data[h][w] == '*')
			{
				if ((filler->map).data[y + h][x + w] == c)
					cnt++;
				else if ((filler->map).data[y + h][x + w] == (c + 32))
					cnt++;
			}
			w++;
		}
		h++;
	}
	return (cnt);
}
