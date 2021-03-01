/*
** EPITECH PROJECT, 2021
** antamn
** File description:
** function to compress text files
*/

#include <antman.h>

int arr_len(char **arr)
{
    int i = 0;

    while (arr[i] != NULL)
        i++;
    return (i);
}

void free_double_star(char **arr)
{
    int a = 0;
 
    while (arr[a] != NULL) {
        free(arr[a]);
        a++;
    }
    free(arr);
}

int get_compressed_txt(char *file)
{
    char **arr = NULL;
    char **dictionary = NULL;

    if (count_spaces(file) == 0) {
        my_putstr(file);
        return (0);
    }
    if (!(arr = my_str_to_word_array(file))
    || !(dictionary = get_dictionary(arr)))
        return (84);
    if (arr_len(dictionary) != arr_len(arr)) {
        print_dictionary(dictionary, 1);
        print_number(dictionary, arr);
    } else
        print_dictionary(dictionary, 0);
    free_double_star(arr);
    free_double_star(dictionary);
    free(file);
    return (0);
}