/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_token.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:54:34 by glatega           #+#    #+#             */
/*   Updated: 2018/08/06 18:53:51 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		place_token(t_game *filler)
{
	int			**heatmap;
	int			x;
	int			y;

	heatmap = make_heatmap(filler);
	y = 0;
	while (y + filler->token.h <= filler->map.h)
	{
		x = 0;
		while (x + filler->token.w <= filler->map.w)
		{
			if (is_valid(filler, x, y))
			{
				if (token_heat(filler, heatmap, x, y) < (filler->heat).value)
				{
					(filler->heat).value = token_heat(filler, heatmap, x, y);
					(filler->heat).x = x - (filler->token).offset_x;
					(filler->heat).y = y - (filler->token).offset_y;
				}
			}
			x++;
		}
		y++;
	}
}
