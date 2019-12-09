/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_obstruct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 15:02:53 by glatega           #+#    #+#             */
/*   Updated: 2018/07/31 15:27:12 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		v_obstruct(t_game *filler, int x, int y, int len)
{
	int		i;
	char	**map;
	char	ob;

	ob = filler->player.enemy == 1 ? 'O' : 'X';
	map = filler->map.data;
	if (x < 0 || x >= (filler->map).w)
		return (0);
	i = 0;
	while (i < len && (y + i) < (filler->map).h)
	{
		if ((y + i) >= 0)
		{
			if (map[y + i][x] == ob || map[y + i][x] == (ob + 32))
				return (1);
		}
		i++;
	}
	return (0);
}
