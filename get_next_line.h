/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:07:33 by tom               #+#    #+#             */
/*   Updated: 2023/12/08 05:20:35 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

int		ft_strlen_char(char *src, char c);
char	*ft_strjoin_and_free_s1_2(char *s1, char *dest);
char	*get_next_line(int fd);
char	*ft_strjoin_and_free_s1(char *s1, char *buffer);
int		ft_chr_line(char *buffer);
void	ft_cut_buff(char *buffer);

#endif