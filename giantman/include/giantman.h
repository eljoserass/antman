/*
** EPITECH PROJECT, 2021
** antman.h
** File description:
** prototypes of antman
*/

#ifndef GIANTMAN_H_
#define GIANTMAN_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#include "lib.h"

int size_of_bytes(char *file);
int read_file(int fd, char *buf, int size);
char *get_file(char *file);

int my_getnbr_mod(char const *str);
int count_spaces(char *file);
char **my_str_to_word_array_mod(char *str);
int get_uncompressed(char *file);

int image_dicompression(char *buf);
int display_comments(char *buf);
void get_number(char *buf, int *i, char *number, char *counter);
void print_number(char *number, char *counter);

void free_double_star(char **arr);

#endif