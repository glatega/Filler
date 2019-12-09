/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:58:24 by glatega           #+#    #+#             */
/*   Updated: 2018/07/31 14:58:33 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int			is_valid(t_game *filler, int x, int y)
{
	char	enemy;
	char	ally;

	enemy = (filler->player).enemy == 1 ? 'O' : 'X';
	ally = (filler->player).self == 1 ? 'O' : 'X';
	if (occupied_by_c(filler, x, y, ally) == 1)
		if (occupied_by_c(filler, x, y, enemy) == 0)
			return (1);
	return (0);
}
