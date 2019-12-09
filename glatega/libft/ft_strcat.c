/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 14:09:16 by glatega           #+#    #+#             */
/*   Updated: 2018/05/28 23:51:57 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i1;
	int		i2;

	i1 = 0;
	while (s1[i1])
		i1++;
	i2 = 0;
	while (s2[i2])
	{
		s1[i1 + i2] = s2[i2];
		i2++;
	}
	s1[i1 + i2] = '\0';
	return (s1);
}