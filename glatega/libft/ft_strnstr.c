/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 10:49:15 by glatega           #+#    #+#             */
/*   Updated: 2018/06/02 19:55:11 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;

	if (ft_strlen(needle) == 0)
		return ((char*)hay);
	while (*hay && len-- > 0)
	{
		i = 0;
		while ((hay[i] == needle[i])
				&& (i < ft_strlen(needle))
				&& ((len + 1 - i > 0)))
			i++;
		if (i == ft_strlen(needle))
			return ((char*)hay);
		hay++;
	}
	return (NULL);
}
