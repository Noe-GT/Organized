/*
** EPITECH PROJECT, 2023
** my_isneg.c
** File description:
** displays either N if the integer passed as parameter is negative
** or P, if positive or null
*/

#include <unistd.h>

int my_isneg(int n)
{
    if (n >= 0) {
        write(1, "P", 1);
    } else {
        write(1, "N", 1);
    }
    return 0;
}
