/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   block_obstruct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 15:01:51 by glatega           #+#    #+#             */
/*   Updated: 2018/07/31 15:02:04 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		block_obstruct(t_game *filler, int x, int y)
{
	int		size;
	int		flag;
	char	ob;
	char	**map;

	ob = filler->player.enemy == 1 ? 'O' : 'X';
	map = filler->map.data;
	if (map[y][x] == ob || map[y][x] == (ob + 32))
		return (0);
	size = 0;
	flag = 0;
	while (flag == 0)
	{
		size++;
		flag += h_obstruct(filler, x - size, y - size, ((size * 2) + 1));
		flag += h_obstruct(filler, x - size, y + size, ((size * 2) + 1));
		flag += v_obstruct(filler, x - size, y - size, ((size * 2) + 1));
		flag += v_obstruct(filler, x + size, y - size, ((size * 2) + 1));
	}
	return (size);
}
