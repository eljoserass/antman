/*
** EPITECH PROJECT, 2021
** antman
** File description:
** get dictionary of the words in array
*/

#include "antman.h"

int is_new(char **dictionary, char *str)
{
    int i = 0;

    while (dictionary[i] != NULL) {
        if (my_strcmp(dictionary[i], str) == 0)
            return (0);
        i++;
    }
    return (1);
}

char **get_dictionary(char **arr)
{
    char **dictionary = NULL;
    int a = 1;

    dictionary = malloc(sizeof(char *) * 2);
    dictionary[0] = my_strdup(arr[0]);
    if (!(dictionary = malloc(sizeof(char *) * 2))
    || !(dictionary[0] = my_strdup(arr[0])))
        return NULL;
    dictionary[1] = NULL;
    while (arr[a] != NULL) {
        if (is_new(dictionary, arr[a]) == 1)
            dictionary = my_arrdup(dictionary, arr[a]);
        a++;
    }
    return (dictionary);
}