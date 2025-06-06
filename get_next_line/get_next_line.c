/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:13:21 by ral-faya          #+#    #+#             */
/*   Updated: 2024/07/25 11:13:45 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_read_line(int fd, char **keep, char **tmp)
{
	char	*buf;
	int		result;

	buf = malloc(sizeof * buf * (BUFFER_SIZE + 1));
	if (!buf)
		return ;
	result = 1;
	while (result > 0)
	{
		result = read(fd, buf, BUFFER_SIZE);
		if (result == -1)
		{
			ft_free(&buf, tmp, keep);
			return ;
		}
		buf[result] = '\0';
		*tmp = ft_strdup(*keep);
		ft_free(keep, 0, 0);
		*keep = ft_join(*tmp, buf);
		ft_free(tmp, 0, 0);
		if (ft_nl_found(*keep))
			break ;
	}
	ft_free(&buf, 0, 0);
}

char	*get_after_nl(const char *s)
{
	char	*result;
	int		i;
	int		j;

	j = 0;
	while (s && s[j])
		j++;
	i = 0;
	while (s[i] != '\0' && s[i] != '\n')
		i++;
	if (s[i] != '\0' && s[i] == '\n')
		i++;
	result = ft_malloc_zero((j - i) + 1, sizeof * result);
	if (!result)
		return (NULL);
	j = 0;
	while (s[i + j])
	{
		result[j] = s[i + j];
		j++;
	}
	return (result);
}

char	*get_before_nl(const char *s)
{
	char	*result;
	int		i;

	i = 0;
	while (s[i] != '\0' && s[i] != '\n')
		i++;
	if (s[i] != '\0' && s[i] == '\n')
		i++;
	result = ft_malloc_zero(i + 1, sizeof * result);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != '\n')
	{
		result[i] = s[i];
		i++;
	}
	if (s[i] == '\n')
	{
		result[i] = s[i];
		i++;
	}
	return (result);
}

char	*ft_parse_line(char **keep, char **tmp)
{
	char	*line;

	*tmp = ft_strdup(*keep);
	ft_free(keep, 0, 0);
	*keep = get_after_nl(*tmp);
	line = get_before_nl(*tmp);
	ft_free(tmp, 0, 0);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*keep;
	char		*line;
	char		*tmp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	tmp = NULL;
	ft_read_line(fd, &keep, &tmp);
	if (keep != NULL && *keep != '\0')
		line = ft_parse_line(&keep, &tmp);
	if (line == NULL || *line == '\0')
	{
		ft_free(&line, &tmp, &keep);
		return (NULL);
	}
	return (line);
}
