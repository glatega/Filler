/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 10:49:15 by glatega           #+#    #+#             */
/*   Updated: 2018/05/24 13:19:15 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;

	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			while (needle[i])
			{
				if (haystack[i] != needle[i])
					break ;
				if (needle[++i] == '\0')
					return ((char*)haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
