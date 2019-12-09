/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 23:52:21 by glatega           #+#    #+#             */
/*   Updated: 2018/06/01 13:59:12 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*res;
	char	*start_s;
	size_t	i;

	if (!s)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	start_s = (char*)s;
	while (*(s + 1))
		s++;
	i = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t')
	{
		s--;
		i++;
	}
	if (!(*start_s))
		if ((res = ft_strnew(0)))
			return (res);
	if (!(res = ft_strnew(ft_strlen(start_s) - i)))
		return (NULL);
	ft_strncpy(res, start_s, (ft_strlen(start_s) - i));
	return (res);
}
