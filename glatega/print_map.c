/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 22:31:15 by glatega           #+#    #+#             */
/*   Updated: 2018/07/31 18:59:40 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	print_map(t_grid grid)
{
	int		x;
	int		y;

	print_player_key(grid.w);
	y = 0;
	while (y < grid.h)
	{
		x = 0;
		while (x < grid.w)
		{
			if ((grid.data)[y][x] == '.')
				ft_putstr_fd(B_GRY "  ", 2);
			else if ((grid.data)[y][x] == 'O' || (grid.data)[y][x] == 'o')
				ft_putstr_fd(B_RED "  ", 2);
			else if ((grid.data)[y][x] == 'X' || (grid.data)[y][x] == 'x')
				ft_putstr_fd(B_BLU "  ", 2);
			else
				ft_putchar((grid.data)[y][x]);
			x++;
		}
		y++;
		ft_putstr_fd(B_RST "\n", 2);
	}
	ft_putstr_fd("\n\n\n\n\n", 2);
}
