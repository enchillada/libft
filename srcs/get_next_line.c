/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esurdam <esurdam@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/20 13:19:19 by esurdam           #+#    #+#             */
/*   Updated: 2017/05/20 13:19:19 by esurdam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static int		validate_buffer(char **buff, char **line) //looks for '\n'
{
	char		*tmp;

	tmp = ft_strchr(*buff, '\n');
	if (tmp)
	{
		*line = ft_strsub(*buff, 0, tmp - *buff);
		ft_memmove(*buff, tmp + 1, ft_strlen(tmp));
		tmp = NULL;
		return (1);
	}
	return (0);
}

static int		read_line(int fd, char **buff, char **line)
{
	char			bfr[BUFF_SIZE + 1];
	int				bytes_read;
	char			*tmp;

	if (read(fd, bfr, 0) < 0)
		return (-1);
	while ((bytes_read = read(fd, bfr, BUFF_SIZE)))
	{
		if (bytes_read == -1)
			return (-1);
		bfr[bytes_read] = '\0';
		tmp = NULL;
		if (*buff)
		{
			tmp = ft_strdup(*buff);
			ft_memdel((void **)buff);
			*buff = ft_strjoin(tmp, bfr);
			ft_memdel((void **)&tmp);
		}
		else
			*buff = ft_strdup(bfr);
		if (validate_buffer(buff, line))
			return (1);
	}
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	static char		*buff[5000];
	int				res;

	if (!line || fd < 0 || fd > 5000)
		return (-1);
	if (buff[fd] && validate_buffer(&buff[fd], line))
		return (1);
	res = read_line(fd, &buff[fd], line);
	if (res != 0)
		return (res);
	if (buff[fd] == NULL || buff[fd][0] == '\0')
		return (0);
	*line = buff[fd];
	buff[fd] = NULL;
	return (1);
}
