/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 01:08:31 by glatega           #+#    #+#             */
/*   Updated: 2018/06/02 00:17:48 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strsplitcnt(const char *s, char c)
{
	size_t	i;
	int		flag;

	i = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			i++;
			flag = 1;
		}
		if (*s == c)
			flag = 0;
		s++;
	}
	return (i);
}

static size_t	ft_strlenc(const char *s, char c)
{
	char	*start;

	start = (char*)s;
	while (*s && *s != c)
		s++;
	return (s - start);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**res;
	size_t	word_cnt;

	if (!s || !c)
		return (NULL);
	word_cnt = ft_strsplitcnt(s, c);
	if (!(res = (char**)ft_memalloc(sizeof(char*) * word_cnt + 1)))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			if (!(*res = ft_strnew(ft_strlenc(s, c))))
				return (NULL);
			ft_strncpy(*res, s, ft_strlenc(s, c));
			res++;
			s = s + ft_strlenc(s, c) - 1;
		}
		s++;
	}
	*res = NULL;
	return (res - word_cnt);
}
