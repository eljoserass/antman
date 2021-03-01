/*
** EPITECH PROJECT, 2021
** antman
** File description:
** functions for print compressed file
*/

#include "antman.h"

void print_dictionary(char **dictionary, int rep_status)
{
    int i = 0;

    if (rep_status == 1) {
        while (dictionary[i] != NULL) {
            my_putstr(dictionary[i]);
            i++;
            my_putchar(' ');
        }
    } else {
        while (dictionary[i] != NULL) {
            my_putstr(dictionary[i]);
            if (dictionary[i + 1] != NULL)
                my_putchar(' ');
            i++;
        }
    }
}

int get_position(char **dicitionary, char **arr, int a)
{
    int pos = 0;

    while (dicitionary[pos] != NULL) {
        if (my_strcmp(dicitionary[pos], arr[a]) == 0)
            return (pos);
        pos++;
    }
    return (-1);
}

void print_number(char **dictionary, char **arr)
{
    int i = 0;

    while (arr[i] != NULL) {
        my_put_nbr(get_position(dictionary, arr, i));
        my_putchar('|');
        i++;
    }
}