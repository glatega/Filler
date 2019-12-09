/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_heatmap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 15:00:44 by glatega           #+#    #+#             */
/*   Updated: 2018/07/31 15:00:57 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int			**make_heatmap(t_game *filler)
{
	int		**heatmap;
	int		y;
	int		x;

	(filler->heat).x = 0;
	(filler->heat).y = 0;
	(filler->heat).value = 2147483647;
	heatmap = (int**)ft_memalloc(sizeof(int*) * filler->map.h);
	y = 0;
	while (y < filler->map.h)
		heatmap[y++] = (int*)ft_memalloc(sizeof(int) * filler->map.w);
	y = 0;
	while (y < filler->map.h)
	{
		x = 0;
		while (x < filler->map.w)
		{
			heatmap[y][x] = block_obstruct(filler, x, y);
			x++;
		}
		y++;
	}
	return (heatmap);
}
