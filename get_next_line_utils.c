/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:05:15 by tom               #+#    #+#             */
/*   Updated: 2023/12/08 05:22:40 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen_char(char *src, char c)
{
	int	i;

	i = 0;
	if (src == NULL)
		return (0);
	while (src[i] != '\0' && src[i] != c)
		i++;
	return (i);
}

char	*ft_strjoin_and_free_s1_2(char *s1, char *dest)
{
	if (dest == NULL)
		return (NULL);
	if (s1 != NULL)
		free(s1);
	if (dest[0] == '\0')
	{
		free(dest);
		return (NULL);
	}
	return (dest);
}
