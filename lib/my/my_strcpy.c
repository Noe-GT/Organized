/*
** EPITECH PROJECT, 2023
** my_strcpy.c
** File description:
** copies a string into another.
*/

#include <stdlib.h>
#include "../../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int length_src = my_strlen(src);

    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    return dest;
}
