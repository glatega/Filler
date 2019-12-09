/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 16:39:14 by glatega           #+#    #+#             */
/*   Updated: 2018/05/29 04:21:00 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_string;
	char	*src_string;

	dst_string = (char*)dst;
	src_string = (char*)src;
	while (n-- > 0)
	{
		*dst_string = *src_string;
		dst_string++;
		src_string++;
	}
	return (dst);
}
