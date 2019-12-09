/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token_heat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:56:51 by glatega           #+#    #+#             */
/*   Updated: 2018/07/31 14:57:12 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int			token_heat(t_game *filler, int **heatmap, int x, int y)
{
	int		h;
	int		w;
	int		value;

	value = 0;
	h = 0;
	while (h < (filler->token).h)
	{
		w = 0;
		while (w < (filler->token).w)
		{
			if ((filler->token).data[h][w] == '*')
				value += heatmap[y + h][x + w];
			w++;
		}
		h++;
	}
	return (value);
}
