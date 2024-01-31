/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:47:15 by tbihoues          #+#    #+#             */
/*   Updated: 2024/01/31 21:28:49 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buff[BUFFER_SIZE + 1];
	char		*dest;
	int			i;

	i = 1;
	dest = NULL;
	if (BUFFER_SIZE == 0 || fd < 0)
		return (0);
	if (ft_check(buff) == 1)
	{
		ft_buf_cut(buff);
		dest = ft_join(dest, buff);
	}
	while (i > 0 && ft_check(buff) == 0)
	{
		i = read(fd, buff, BUFFER_SIZE);
		if (i < 0)
		{
			free(dest);
			return (NULL);
		}
		buff[i] = '\0';
		dest = ft_join(dest, buff);
	}
	return (dest);
}
