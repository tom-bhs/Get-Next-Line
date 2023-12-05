/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:07:33 by tom               #+#    #+#             */
/*   Updated: 2023/12/05 23:36:06 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
# endif

int		ft_strlen_char(char *src, char c);
char	*ft_strjoin_and_free_s1_2(char *s1, char *dest);
char	*get_next_line(int fd);
char	*substr(const char *s, unsigned int start, size_t len);

#endif