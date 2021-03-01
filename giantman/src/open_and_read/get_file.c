/*
** EPITECH PROJECT, 2020
** read_pos
** File description:
** reads position maps
*/

#include "giantman.h"

char *get_file(char *file)
{
    int nbr_bytes = size_of_bytes(file);
    char *buf = malloc(sizeof(char) * (nbr_bytes + 1));
    int fd = 0;

    fd = open (file, O_RDONLY);
    if (buf == NULL || fd == -1)
        return (NULL);
    if (read_file(fd, buf, nbr_bytes) == 84 || close(fd) == -1)
        return (NULL);
    buf[nbr_bytes] = '\0';
    return (buf);
}