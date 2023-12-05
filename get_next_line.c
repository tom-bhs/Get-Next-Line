/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:19:13 by tbihoues          #+#    #+#             */
/*   Updated: 2023/12/05 03:14:27 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *read_to_static(int fd, char *static_buff)
{
    char *buff;
    int read_bytes;
    char *temp;

    buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!buff)
        return (NULL);
    read_bytes = 1;
    while (!ft_strchr(static_buff, '\n') && read_bytes != 0)
    {
        read_bytes = read(fd, buff, BUFFER_SIZE);
        if (read_bytes == -1)
        {
            free(buff);
            return (NULL);
        }
        buff[read_bytes] = '\0';
        temp = static_buff;
        static_buff = ft_strjoin(temp, buff);
        free(temp);
    }
    free(buff);
    return (static_buff);
}

char *get_next_line(int fd)
{
    static char *static_buff;
    char *line;
    int i;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    static_buff = read_to_static(fd, static_buff);
    if (!static_buff)
        return (NULL);
    i = 0;
    while (static_buff[i] && static_buff[i] != '\n')
        i++;
    line = ft_substr(static_buff, 0, i + 1);
    static_buff = ft_strdup(&static_buff[i + 1]);
    return (line);
}
