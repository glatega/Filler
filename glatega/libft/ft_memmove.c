/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 14:51:10 by glatega           #+#    #+#             */
/*   Updated: 2018/05/29 01:50:01 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*char_dst;
	char	*char_src;

	char_dst = (char*)dst;
	char_src = (char*)src;
	i = 1;
	if (src >= dst)
		ft_memcpy(dst, src, n);
	else
		while (i < n + 1)
		{
			char_dst[n - i] = char_src[n - i];
			i++;
		}
	return (dst);
}
