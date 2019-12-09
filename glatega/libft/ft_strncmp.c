/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 16:08:08 by glatega           #+#    #+#             */
/*   Updated: 2018/06/05 20:57:55 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (n);
	while ((*s1 == *s2) && (*s1 && *s2) && --n)
	{
		s1++;
		s2++;
	}
	return ((int)((const unsigned char)*s1 - (const unsigned char)*s2));
}
