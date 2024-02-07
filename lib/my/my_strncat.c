/*
** EPITECH PROJECT, 2023
** my_strncat.c
** File description:
** Concatenates n characters of the src string
** to the end of the dest string
*/

#include <stdlib.h>
#include "../../include/my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int i2 = 0;
    int length_dest = my_strlen(dest);

    i = length_dest;
    while (src[i2] && i2 < nb) {
        dest[i] = src[i2];
        i2++;
        i++;
    }
    return dest;
}
