/*
** EPITECH PROJECT, 2021
** image algorithm
** File description:
** algorithm dicompression of PPM images
*/

#include "giantman.h"

int image_dicompression(char *buf)
{
    int i = display_comments(buf);
    char *counter = malloc(sizeof(char) * 6);
    char *number = malloc(sizeof(char) * 4);

    if (number == NULL || counter == NULL)
        return (84);
    while (buf[i] != '\0') {
        get_number(buf, &i, number, counter);
        print_number(number, counter);
        i++;
    }
    free(number);
    free(counter);
    free(buf);
    return (0);
}