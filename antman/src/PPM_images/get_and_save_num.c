/*
** EPITECH PROJECT, 2021
** image algorithm
** File description:
** algorithm of PPM images
*/

#include "antman.h"

void save_num(int i, char *num, char *buf)
{
    int j = 0;

    while (buf[i] != '\n' && buf[i] != '\0') {
        num[j] = buf[i];
        j++;
        i++;
    }
    num[j] = '\0';
}

char *get_num(char *buf, char *next, int *i)
{
    int tmp = (*i);
    char *num = malloc(sizeof(char) * 4);

    if (num == NULL)
        return (NULL);
    tmp = get_next_elem(buf, tmp);
    save_num(tmp, num, buf);
    tmp = get_next_pos(tmp, buf) + 1;
    tmp = get_next_elem(buf, tmp);
    save_num(tmp, next, buf);
    (*i) = tmp;
    return (num);
}