/*
** EPITECH PROJECT, 2021
** get_and_prints_number
** File description:
** gets the number and prints it
*/

#include "giantman.h"

void get_number(char *buf, int *i, char *number, char *counter)
{
    int r = 0;
    int j = 0;

    while (buf[(*i)] != '@')
        counter[r++] = buf[(*i)++];
    counter[r] = '\0';
    while (buf[++(*i)] != '\n')
        number[j++] = buf[(*i)];
    number[j] = '\0';
    r = 0;
    j = 0;
}

void print_number(char *number, char *counter)
{
    int n = 0;

    while (n++ < my_getnbr(counter)) {
        my_putstr(number);
        my_putchar('\n');
    }
    n = 0;
}