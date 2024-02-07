/*
** EPITECH PROJECT, 2023
** my_strcat.c
** File description:
** Concatenates two strings
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int i2 = 0;
    int length_dest = my_strlen(dest);

    i = length_dest;
    while (src[i2]) {
        dest[i] = src[i2];
        i2++;
        i++;
    }
    return dest;
}
