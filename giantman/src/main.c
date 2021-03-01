/*
** EPITECH PROJECT, 2021
** main
** File description:
** main function giantman
*/

#include "giantman.h"

int check_arguments(char **av)
{
    if ((my_strcmp("1", av[2]) == 0) ||
    (my_strcmp("2", av[2]) == 0) ||
    (my_strcmp("3", av[2]) == 0))
        return (0);
    my_putstr("INVALID FILE DENTIFIER\n");
    return (84);
}

int call_functions(char *file, char **av)
{
    if (check_arguments(av) == 84)
        return (84);
    if (my_strcmp("1", av[2]) == 0)
        return (get_uncompressed(file));
    if (my_strcmp("2", av[2]) == 0) {
        my_putstr(file);
        free(file);
        return (0);
    }
    if (my_strcmp("3", av[2]) == 0)
        return (image_dicompression(file));
    return (0);
}

int main(int ac, char **av)
{
    char *file = NULL;

    if (ac != 3) {
        my_putstr("INVALID ARGUMENTS\n");
        return (84);
    }
    if (!(file = get_file(av[1]))) {
        my_putstr("INVALID FILE\n");
        return (84);
    }
    return (call_functions(file, av));
}