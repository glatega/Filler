/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 15:00:37 by glatega           #+#    #+#             */
/*   Updated: 2018/05/28 15:13:10 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*char_s;

	char_s = (char*)s;
	while (n-- > 0)
	{
		if (*char_s == (char)c)
		{
			return (char_s);
		}
		char_s++;
	}
	return (NULL);
}
