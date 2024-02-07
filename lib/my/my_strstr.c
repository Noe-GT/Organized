/*
** EPITECH PROJECT, 2023
** my_strstr.c
** File description:
** finds the first occurrence of a word in a string.
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../include/my.h"

char *my_strstr(char *str, char const *to_find)
{
    int ind = 0;
    int ind2 = 0;
    int temp = 0;
    int length = my_strlen(to_find);

    while (str[ind] != '\0') {
        temp = ind;
        while (str[ind] == to_find[ind2] && to_find[ind2] != '\0') {
            ind2++;
            ind++;
        }
        if (length == ind2)
            return (str + (ind - ind2));
        ind2 = 0;
        ind = temp + 1;
    }
    return NULL;
}
