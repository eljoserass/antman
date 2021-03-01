/*
** EPITECH PROJECT, 2021
** image algorithm
** File description:
** algorithm of PPM images
*/

#include "antman.h"

int get_next_elem(char *str, int i)
{
    int j = i;

    while (str[j] != '\n' && str[j] != '\0') {
        if (str[j] > '9' || str[j] < '0') {
            j = get_next_pos(j, str);
            i = j + 1;
        }
        if (str[j] == '\0')
            return (84);
        j++;
    }
    return (i);
}