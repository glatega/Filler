/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_grid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 22:35:05 by glatega           #+#    #+#             */
/*   Updated: 2018/07/31 10:38:35 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		pop_grid(t_grid *grid, char *header, int offset)
{
	char	*line;
	int		i;

	grid->h = ft_atoi(&ft_strchr(header, ' ')[1]);
	grid->w = ft_atoi(&ft_strchr(&ft_strchr(header, ' ')[1], ' ')[1]);
	if (!grid->data)
	{
		grid->data = (char**)ft_memalloc(sizeof(char*) * grid->h);
		i = 0;
		while (i < grid->h)
		{
			(grid->data)[i] = ft_strnew(grid->w);
			i++;
		}
	}
	if (offset == 4)
		get_next_line(0, &line);
	i = 0;
	while (i < grid->h)
	{
		get_next_line(0, &line);
		(grid->data)[i] = ft_strncpy((grid->data)[i], &line[offset], grid->w);
		i++;
	}
	ft_strdel(&line);
}
