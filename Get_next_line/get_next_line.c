/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 17:19:53 by gstarvin          #+#    #+#             */
/*   Updated: 2019/09/23 18:39:08 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_line(char **s, int nbread, char **line, int fd)
{
	int		len;
	char	*tmp;

	len = 0;
	while (s[fd][len] != '\n' && s[fd][len] != '\0')
		len++;
	if (s[fd][len] == '\n')
	{
		*line = ft_strsub(s[fd], 0, len);
		tmp = ft_strdup(s[fd] + len + 1);
		free(s[fd]);
		s[fd] = tmp;
		if (s[fd][0] == '\0')
			ft_strdel(&s[fd]);
	}
	else if (s[fd][len] == '\0' && nbread == 0)
	{
		*line = ft_strdup(s[fd]);
		ft_strdel(&s[fd]);
	}
	else if (s[fd][len] == '\0' && nbread != 0)
		return (get_next_line(fd, line));
	return (1);
}

int		get_next_line(int fd, char **line)
{
	char		buff[BUFF_SIZE + 1];
	static char *s[10240];
	int			nbread;
	char		*tmp;

	nbread = 0;
	if (fd < 0 || line == NULL)
		return (-1);
	while ((nbread = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[nbread] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strnew(1);
		tmp = ft_strjoin(s[fd], buff);
		free(s[fd]);
		s[fd] = tmp;
		if (ft_strchr(s[fd], '\n') != NULL)
			break ;
	}
	if (nbread < 0)
		return (-1);
	else if (nbread == 0 && (s[fd] == NULL || s[fd][0] == '\0'))
		return (0);
	return (get_line(s, nbread, line, fd));
}
