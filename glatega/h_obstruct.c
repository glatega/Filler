/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_obstruct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 15:03:46 by glatega           #+#    #+#             */
/*   Updated: 2018/07/31 15:03:56 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		h_obstruct(t_game *filler, int x, int y, int len)
{
	int		i;
	char	**map;
	char	ob;

	ob = filler->player.enemy == 1 ? 'O' : 'X';
	map = filler->map.data;
	if (y < 0 || y >= (filler->map).h)
		return (0);
	i = 0;
	while ((i < len) && ((x + i) < (filler->map).w))
	{
		if ((x + i) >= 0)
		{
			if (map[y][x + i] == ob || map[y][x + i] == (ob + 32))
				return (1);
		}
		i++;
	}
	return (0);
}
