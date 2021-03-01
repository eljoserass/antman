/*
** EPITECH PROJECT, 2021
** giantman
** File description:
** print uncompressed file
*/

#include "giantman.h"

void free_double_star(char **arr)
{
    int a = 0;
    
    while (arr[a] != NULL) {
        free(arr[a]);
        a++;
    }
    free(arr);
}

int get_init_position(char *file)
{
    int i = 0;

    while (file[i] != '0' && file[i + 1] != '|') {
        i++;
    }
    return (i);
}

int is_pipe(char *file)
{
    int i = 0;

    while (file[i] != '\0') {
        if (file[i] == '|')
            return (1);
        i++;
    }
    return (0);
}

void print_uncompressed_text(char *file, char **dictionary)
{
    int i = get_init_position(file);
    int pos = 0;

    while (file[i] != '\0') {
        while (file[i] != '|') {
            pos = pos * 10 + (file[i] - '0');
            i++;
        }
        my_putstr(dictionary[pos]);
        if (file[i + 1]  != '\0')
            my_putchar(' ');
        pos = 0;
        i++;
    }
    my_putchar('\n');
}

int get_uncompressed(char *file)
{
    int pos = 0;
    char **dictionary = NULL;

    if (is_pipe(file) == 0) {
        my_putstr(file);
        return (0);
    }
    if (count_spaces(file) != 0) {
        dictionary = my_str_to_word_array_mod(file);
        if (!dictionary)
            return (84);
        print_uncompressed_text(file, dictionary);
        free_double_star(dictionary);
    } else
        my_putstr(file);
    free(file);
    return (0);
}