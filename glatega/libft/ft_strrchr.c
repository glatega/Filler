/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 15:18:19 by glatega           #+#    #+#             */
/*   Updated: 2018/06/06 00:40:01 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*end;

	end = ft_strchr(s, 0);
	while (end != s)
	{
		if (*end == (char)c)
			return (end);
		end--;
	}
	if (*end == (char)c)
		return (end);
	return (NULL);
}
