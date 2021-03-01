/*
** EPITECH PROJECT, 2021
** image algorithm
** File description:
** algorithm of PPM images
*/

#include "antman.h"

int get_next_pos(int i, char *buf)
{
    while (buf[i] != '\n') {
        i++;
    }
    return (i);
}