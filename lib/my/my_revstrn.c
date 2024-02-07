/*
** EPITECH PROJECT, 2023
** my_revstrn
** File description:
** reverses a string starting at the 'head' position
*/

#include <stdio.h>
#include "../../include/my.h"

char *my_revstrn(char *str, int head)
{
    int len = my_strlen(str);
    char temp = 0;
    int tail;

    tail = len - 1;
    while (head < tail) {
        temp = str[head];
        str[head] = str[tail];
        str[tail] = temp;
        head++;
        tail--;
    }
    str[len] = '\0';
    return str;
}
