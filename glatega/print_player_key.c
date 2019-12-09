/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_player_key.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 18:58:16 by glatega           #+#    #+#             */
/*   Updated: 2018/07/31 19:04:40 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	print_player_key(int width)
{
	int		i;

	i = 24;
	ft_putstr_fd(GOTOPLEFT RED "PLAYER 1 - O" RESET, 2);
	while (i++ < (width * 2))
		ft_putchar_fd(' ', 2);
	ft_putstr_fd(BLU "X - PLAYER 2\n" RESET, 2);
}
