/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** Reproduce the behavior of the str cmp function
*/

#include <stdio.h>

int length_one(char const *n)
{
    int i = 0;

    while (n[i] != '\0') {
        i++;
    }
    return (i);
}

int compare_string_one(char const *n1, char const *n2, int *i)
{
    while (n1[(*i)] && n2[(*i)]) {
        if (n1[(*i)] != n2[(*i)]) {
            return (n1[(*i)] - n2[(*i)]);
        }
        (*i)++;
    }
    return (0);
}

int my_strcmp(char const *n1, char const *n2)
{
    int i = 0;
    int len = compare_string_one(n1, n2, &i);
    int lenn1 = length_one(n1);
    int lenn2 = length_one(n2);

    if (len != 0)
        return (len);
    if (lenn1 == lenn2) {
        return (0);
    } else if (lenn1 > lenn2) {
        return (n1[i]);
    }
    return (-n2[i]);
}
//if len == 0 str1 and str2 are the same
//else they are different