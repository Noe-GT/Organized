/*
** EPITECH PROJECT, 2023
** my_strcpy.c
** File description:
** copies a string into another.
*/

#include <stdlib.h>
#include "../../include/my.h"

char *my_strdup(char const *src)
{
    int length_src = my_strlen(src);
    char *dest;
    int i = 0;

    dest = malloc(sizeof(char) * length_src + 1);
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
