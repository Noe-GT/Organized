/*
** EPITECH PROJECT, 2023
** my_revstr
** File description:
** reverses a string
*/
#include <unistd.h>
#include <stdio.h>
#include "../../include/my.h"

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    char temp = 0;
    int tail;

    tail = len - 1;
    for (int head = 0; head < tail; head++) {
        temp = str[head];
        str[head] = str[tail];
        str[tail] = temp;
        tail--;
    }
    str[len] = '\0';
    return str;
}
