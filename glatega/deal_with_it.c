/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deal_with_it.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 15:38:30 by glatega           #+#    #+#             */
/*   Updated: 2018/07/31 15:39:01 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	deal_with_it(t_game *filler, char *line)
{
	pop_grid(&(filler->token), line, 0);
	trim_token(&(filler->token));
	place_token(filler);
	output_token(filler);
}
