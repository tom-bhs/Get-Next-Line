/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:19:13 by tbihoues          #+#    #+#             */
/*   Updated: 2023/12/05 23:27:48 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h" // Assurez-vous que c'est le bon nom du fichier d'en-tête

char *get_next_line(int fd)
{
    static char *rest = NULL; // Pour stocker le reste de la lecture précédente
    char *buffer;
    char *line;
    ssize_t read_bytes;
    int newline_index;

    // Vérification des erreurs
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);

    buffer = malloc(BUFFER_SIZE + 1);
    if (!buffer)
        return (NULL);

    while (1) {
        read_bytes = read(fd, buffer, BUFFER_SIZE);
        if (read_bytes < 0) {
            free(buffer);
            return (NULL);
        }

        buffer[read_bytes] = '\0';
        rest = ft_strjoin_and_free_s1_2(rest, buffer); // Concatène et libère s1
        if (!rest) break; // En cas d'erreur ou si rien n'est lu

        newline_index = ft_strlen_char(rest, '\n');
        if (rest[newline_index] == '\n' || read_bytes == 0) {
            line = substr(rest, 0, newline_index + (rest[newline_index] == '\n' ? 1 : 0));
            rest = substr(rest, newline_index + 1, ft_strlen_char(rest + newline_index + 1, '\0'));
            return line;
        }
    }

    free(buffer);
    return (NULL);
}
