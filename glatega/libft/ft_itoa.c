/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 01:17:02 by glatega           #+#    #+#             */
/*   Updated: 2018/06/05 18:35:13 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	char	*str_n;
	long	nbr;

	nbr = n;
	len = 1;
	if (n < 0)
		len++;
	while ((nbr = nbr / 10))
		len++;
	if (!(str_n = (char*)ft_memalloc(sizeof(char) * len + 1)))
		return (NULL);
	nbr = n;
	if (nbr < 0)
		nbr = -nbr;
	str_n[0] = '-';
	str_n[len--] = '\0';
	str_n[len] = '0';
	while (nbr != 0)
	{
		str_n[len--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str_n);
}
