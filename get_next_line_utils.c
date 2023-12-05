/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:05:15 by tom               #+#    #+#             */
/*   Updated: 2023/12/05 23:37:09 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_strlen_char(char *src, char c)
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

char	*substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
    size_t	i;

	if (!s || start >= strlen(s)) return NULL;

	sub = malloc(len + 1);
	if (!sub) return NULL;

	for (i = 0; i < len && s[start + i]; ++i) {
		sub[i] = s[start + i];
	}
	sub[i] = '\0';

	return sub;
}
