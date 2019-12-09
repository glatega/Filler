/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 19:14:44 by glatega           #+#    #+#             */
/*   Updated: 2018/08/07 15:26:16 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		main(void)
{
	t_game		*filler;
	char		*line;
	int			ret;
	int			fd;

	//ft_putstr_fd(CLEAR "\n", 2);
	fd = 0;
	filler = init();
	while ((ret = get_next_line(0, &line)) > -1)
	{
		if (ft_strncmp(line, "Plateau", 7) == 0)
		{
			pop_grid(&(filler->map), line, 4);
			continue ;
		}
		else if (ft_strncmp(line, "Piece", 5) == 0)
			deal_with_it(filler, line);
		//print_map(filler->map);
		mem_clean(filler);
		ft_strdel(&line);
		if ((filler->heat).value == 2147483647)
			break ;
	}
	return (0);
}
