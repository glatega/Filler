/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frontcut.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 20:18:53 by glatega           #+#    #+#             */
/*   Updated: 2018/06/24 20:23:49 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_frontcut(char *begin, int n)
{
	int		i;
	int		len;

	len = ft_strlen(begin);
	i = 0;
	while (begin[n + i])
	{
		begin[i] = begin[n + i];
		i++;
	}
	while (i < len)
	{
		begin[i] = '\0';
		i++;
	}
	return (begin);
}
