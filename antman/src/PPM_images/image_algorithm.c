/*
** EPITECH PROJECT, 2021
** image algorithm
** File description:
** algorithm compression of PPM images
*/

#include "antman.h"

int image_compression(char *buf, char *next)
{
    int i = 0;
    int count_num = 0;
    char *num = NULL;

    print_comments(buf);
    while (buf[i] != '\0') {
        if (i == 0 || my_strcmp(num, next) == 0) {
            count_num++;
            num = get_num(buf, next, &i);
        } else {
            print_solution(count_num, num);
            free(num);
            num = get_num(buf, next, &i);
            count_num = 1;
        }
    }
    print_solution(count_num, num);
    free(buf);
    free(next);
    return (0);
}