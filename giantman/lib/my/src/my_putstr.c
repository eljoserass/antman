/*
** EPITECH PROJECT, 2020
** my_pustr.c
** File description:
** one-by-one the characters of a string
*/

#include "lib.h"

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
