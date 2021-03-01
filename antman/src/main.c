/*
** EPITECH PROJECT, 2021
** main
** File description:
** main function antman
*/

#include "antman.h"

int check_arguments(char **av)
{
    if ((my_strcmp("1", av[2]) == 0) ||
    (my_strcmp("2", av[2]) == 0) ||
    (my_strcmp("3", av[2]) == 0))
        return (0);
    my_putstr("INVALID FILE IDENTIFIER\n");
    return (84);
}

int call_functions(char *file, char **argv, char *next)
{
    if (check_arguments(argv) == 84)
        return (84);
    if (my_strcmp("1", argv[2]) == 0) {
        free(next);
        return (get_compressed_txt(file));
    }
    if (my_strcmp("2", argv[2]) == 0) {
        my_putstr(file);
        free(file);
        free(next);
        return (0);
    }
    if (my_strcmp("3", argv[2]) == 0)
        return (image_compression(file, next));
    return (0);
}

int main(int argc, char **argv)
{
    char *file = NULL;
    char *next = malloc(sizeof(char) * 4);

    if (next == NULL)
        return (84);
    if (argc > 3 || argc < 3) {
        my_putstr("INVALID ARGUMENTS\n");
        return (84);
    }
    if (!(file = get_file(argv[1]))) {
        my_putstr("INVALID FILE\n");
        return (84);
    }
    return (call_functions(file, argv, next));
}