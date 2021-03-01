/*
** EPITECH PROJECT, 2021
** antman
** File description:
** coutn spaces
*/

#include "giantman.h"

int count_spaces(char *file)
{
    int i = 0;
    int spaces = 0;
    while (file[i] != '\0') {
        if (file[i] == ' ')
            spaces++;
        i++;
    }
    return (spaces);
}