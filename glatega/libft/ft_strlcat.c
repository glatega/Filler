/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 14:09:16 by glatega           #+#    #+#             */
/*   Updated: 2018/05/29 09:31:18 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i1;
	size_t	i2;

	i1 = ft_strlen(dst);
	i2 = 0;
	if (i1 + 1 > dstsize)
		return (ft_strlen(src) + dstsize);
	while (src[i2] && i2 < (dstsize - i1 - 1))
	{
		dst[i1 + i2] = src[i2];
		i2++;
	}
	dst[i1 + i2] = '\0';
	return (i1 + ft_strlen(src));
}
