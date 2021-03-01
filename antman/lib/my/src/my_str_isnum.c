/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** 1: digits. 0: otherwise
*/

int my_str_isnum(char const *str, int i, char c)
{
    while (str[i] != c && str[i] != '\0') {
        if (str[i] >= '0'  && str[i] <= '9') {
            i++;
        } else
            return (0);
    }
    return (1);
}