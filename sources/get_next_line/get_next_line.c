/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:00:02 by allefran          #+#    #+#             */
/*   Updated: 2025/02/24 11:14:23 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_gnl_strjoin(char *s1, char const *s2)
{
	char	*new_s;
	int		i;
	int		j;

	if (!s1)
		s1 = ft_strdup("");
	if (!s1)
		return (free(s1), NULL);
	new_s = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (new_s == NULL)
		return (free(s1), NULL);
	i = 0;
	while (s1[i])
	{
		new_s[i] = s1[i];
		i++;
	}
	j = -1;
	while (s2[++j])
	{
		new_s[i] = s2[j];
		i++;
	}
	new_s[i] = '\0';
	return (free(s1), new_s);
}

static int	ft_gnl_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			return (1);
		}
		i++;
	}
	if ((unsigned char)c == '\0')
	{
		return (1);
	}
	return (0);
}

char	*ft_print_line(char *line)
{
	int		i;
	int		len;
	char	*line_temp;

	len = 0;
	while (line && line[len] != '\n')
		len++;
	line_temp = malloc(sizeof(char) * (len + ft_gnl_strchr(line, '\n') + 1));
	if (!line_temp)
		return (NULL);
	i = 0;
	while (line && line[i] != '\n')
	{
		line_temp[i] = line[i];
		i++;
	}
	if (line[i] == '\n')
	{
		line_temp[i] = '\n';
		i++;
	}
	line_temp[i] = '\0';
	free(line);
	return (line_temp);
}

void	ft_next_line(char *buffer)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\0')
		return ;
	else if (buffer[i] == '\n')
	{
		len = (ft_strlen(buffer) - i);
		while (j < len)
		{
			buffer[j] = buffer[i + 1];
			i++;
			j++;
		}
	}
}

char	*get_next_line(int fd)
{
	int			nb_read;
	static char	buffer[BUFFER_SIZE + 1] = {0};
	char		*line;

	line = NULL;
	line = ft_gnl_strjoin(line, buffer);
	while (!ft_gnl_strchr((const char *)buffer, '\n') && line != NULL)
	{
		nb_read = read(fd, buffer, BUFFER_SIZE);
		if (nb_read == -1)
			return (free(line), ft_bzero(buffer, BUFFER_SIZE), NULL);
		buffer[nb_read] = '\0';
		if (nb_read == 0)
		{
			ft_bzero(buffer, BUFFER_SIZE);
			if (line && line[0] == 0)
				return (free(line), NULL);
			return (line);
		}
		line = ft_gnl_strjoin(line, buffer);
	}
	if (!line)
		return (NULL);
	ft_next_line(buffer);
	return (ft_print_line(line));
}
