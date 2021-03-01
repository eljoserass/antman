/*
** EPITECH PROJECT, 2021
** print_comments
** File description:
** print the comments and return the i after them
*/

#include "giantman.h"

int display_comments(char *buf)
{
    int i = 0;
    int j = 0;

    while (buf[i] != '@')
        i++;
    while (buf[i] != '\n')
        i--;
    while (j < i)
        my_putchar(buf[j++]);
    my_putchar('\n');
    return (i + 1);
}