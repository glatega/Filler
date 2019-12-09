/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 05:04:18 by glatega           #+#    #+#             */
/*   Updated: 2018/05/29 05:16:06 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;
	char	*mem_start;

	mem = (char*)malloc(sizeof(char) * size);
	if (mem == NULL)
		return (mem);
	mem_start = mem;
	while (size--)
	{
		*mem = '\0';
		mem++;
	}
	return (mem_start);
}
