/*
** EPITECH PROJECT, 2021
** antman
** File description:
** strdup but with arrays
*/

#include "antman.h"

char **my_arrdup(char **arr, char *new)
{
    char **result = NULL;
    int i = 0;
    int max = 0;

    while (arr[max] != NULL) {
        max++;
    }
    if (max == 0)
        max = 1;
    result = malloc(sizeof(char *) * (max + 2));
    if (!result)
        return (NULL);
    while (i < max) {
        result[i] = my_strdup(arr[i]);
        i++;
    }
    result[i++] = my_strdup(new);
    result[i++] = NULL;
    free_double_star(arr);
    return (result);
}