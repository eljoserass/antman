/*
** EPITECH PROJECT, 2021
** giantman.h
** File description:
** prototypes of giantman
*/

#ifndef ANTMAN_H_
#define ANTMAN_H_

#include <sys/stat.h>
#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lib.h"

#include <lib.h>

char **my_str_to_word_array(char *);
char **my_arrdup(char **arr, char *new);

char *get_file(char *);
int read_file(int , char *, int );
int size_of_bytes(char *);

int get_compressed_txt(char *file);
char **get_dictionary(char **arr);
void print_dictionary(char **dictionary, int rep_status);
void print_number(char **dictionary, char **arr);

int image_compression(char *buf, char *next);
void save_num(int i, char *num, char *buf);
char *get_num(char *buf, char *next, int *i);
int get_next_elem(char *str, int i);
int get_next_pos(int i, char *buf);
void print_comments(char *buf);
void print_solution(int count_num, char *num);

int count_spaces(char *file);
void free_double_star(char **arr);

#endif