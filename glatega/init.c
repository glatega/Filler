/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 22:36:28 by glatega           #+#    #+#             */
/*   Updated: 2018/07/27 22:36:44 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_game		*init(void)
{
	t_game		*filler;
	char		*line;

	filler = (t_game*)ft_memalloc(sizeof(t_game));
	get_next_line(0, &line);
	filler->player.self = ft_atoi(&line[10]);
	filler->player.enemy = filler->player.self == 1 ? 2 : 1;
	return (filler);
}
