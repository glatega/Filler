/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_token.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:55:21 by glatega           #+#    #+#             */
/*   Updated: 2018/07/31 14:55:43 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		output_token(t_game *filler)
{
	ft_putnbr_fd((filler->heat).y, 1);
	ft_putchar_fd(' ', 1);
	ft_putnbr_fd((filler->heat).x, 1);
	ft_putchar_fd('\n', 1);
}
