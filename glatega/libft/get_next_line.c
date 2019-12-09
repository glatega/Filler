/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:15:48 by glatega           #+#    #+#             */
/*   Updated: 2018/07/07 16:39:34 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	find_nl(char *s)
{
	int		i;

	if (!s)
		return (-1);
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int			store_next_buff(t_fd_data *data)
{
	int		rtn;
	char	*buff;
	char	*old_pointer;

	buff = ft_strnew(BUFF_SIZE);
	rtn = read(data->fd, buff, BUFF_SIZE);
	old_pointer = data->storage;
	data->storage = ft_strjoin(data->storage, buff);
	ft_bzero(old_pointer, ft_strlen(old_pointer));
	ft_bzero(buff, ft_strlen(buff));
	free(old_pointer);
	free(buff);
	if (rtn != BUFF_SIZE && find_nl(data->storage) == -1)
		data->nli = ft_strlen(data->storage);
	else
		data->nli = find_nl(data->storage);
	return (rtn);
}

t_fd_data	*get_fd_data(int fd, t_list **vault)
{
	t_fd_data		*data;
	t_list			*vault_origin;

	vault_origin = *vault;
	while (*vault)
	{
		if (((t_fd_data*)((*vault)->content))->fd == fd)
		{
			data = (t_fd_data*)(*vault)->content;
			*vault = vault_origin;
			return (data);
		}
		if (!(*vault)->next)
		{
			*vault = vault_origin;
			break ;
		}
		*vault = (*vault)->next;
	}
	data = (t_fd_data*)ft_memalloc(sizeof(t_fd_data));
	data->fd = fd;
	ft_lstprepend(vault, ft_lstnew(data, sizeof(t_fd_data)));
	free(data);
	return ((t_fd_data*)(*vault)->content);
}

int			get_next_line(const int fd, char **line)
{
	static t_list	*vault;
	t_fd_data		*data;
	int				rtn;

	if (fd < 0 || !line)
		return (-1);
	data = get_fd_data(fd, &vault);
	if (!(data->storage))
		data->storage = ft_strnew(BUFF_SIZE);
	while (find_nl(data->storage) == -1)
		if ((rtn = store_next_buff(data)) < BUFF_SIZE)
			break ;
	if (!rtn && rtn == -1)
		return (-1);
	if (ft_strlen(data->storage) == 0)
	{
		*line = ft_strnew(0);
		return (0);
	}
	*line = ft_strncpy(ft_strnew(data->nli), data->storage, data->nli);
	data->storage = ft_frontcut(data->storage, data->nli + 1);
	data->nli = find_nl(data->storage) == -1 ? \
				ft_strlen(data->storage) : find_nl(data->storage);
	return (1);
}
