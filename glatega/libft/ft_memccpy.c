/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 16:39:14 by glatega           #+#    #+#             */
/*   Updated: 2018/06/02 21:26:30 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*dst_string;
	char	*src_string;

	dst_string = (char*)dst;
	src_string = (char*)src;
	while (n-- > 0)
	{
		*dst_string = *src_string;
		dst_string++;
		if (*src_string == (char)c)
			return (dst_string);
		src_string++;
	}
	return (NULL);
}
