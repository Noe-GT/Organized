/*
** EPITECH PROJECT, 2023
** my_strcapitalize.c
** File description:
** Capitalizes the first letter of each word.
*/
#include <stdio.h>

static void change_case(int ind, char *str)
{
    int ind2 = ind;
    char up;

    if (ind != 0) {
        ind2++;
    }
    if (str[ind2] >= 'a' && str[ind2] <= 'z') {
        up = str[ind2] - 32;
        str[ind2] = up;
    }
}

char *my_strcapitalize(char *str)
{
    int ind = 0;
    int ind2 = 0;
    char low;
    int upped;

    change_case(0, str);
    while (str[ind] != '\0') {
        upped = 0;
        if (str[ind] == ' ' || str[ind] == '-' || str[ind] == '+') {
            change_case(ind, str);
            upped = 1;
        }
        ind2 = ind + 1;
        if (str[ind2] >= 'A' && str[ind2] <= 'Z' && upped == 0) {
            low = str[ind2] + 32;
            str[ind2] = low;
        }
        ind++;
    }
    return str;
}
