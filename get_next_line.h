/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:07:33 by tom               #+#    #+#             */
/*   Updated: 2023/12/05 01:37:21 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
char	*strjoin(const char *s1, const char *s2);
char	*strdup(const char *s);
size_t	strlen(const char *s);
char	*substr(const char *str, size_t start, size_t length);
char	*strchr(const char *s, int c);
char	*_fill_line_buffer(int fd, char *left_c, char *buffer);
char	*set_line(char *line_buffer);

#endif