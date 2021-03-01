/*
** EPITECH PROJECT, 2021
** image algorithm
** File description:
** algorithm compression of PPM images
*/

#include "antman.h"

void print_comments(char *buf)
{
    int i = 0;
    int j = 0;
    bool is_num = false;

    while (buf[j] != '\0' && is_num == false) {
        is_num = true;
        while (buf[j] != '\n') {
            if (buf[j] < '0' || buf[j] > '9')
                is_num = false;
            j++;
        }
        while (buf[i] != '\n' && is_num == false) {
            my_putchar(buf[i]);
            i++;
        }
        i++;
        j++;
        if (is_num == false)
            my_putchar('\n');
    }
}

void print_solution(int count_num, char *num)
{
    my_put_nbr(count_num);
    my_putstr("@");
    my_putstr(num);
    my_putchar('\n');
}
