/*
** EPITECH PROJECT, 2023
** nbr_to_str
** File description:
** nbr_to_str
*/

#include "../../include/my.h"

char *nbr_to_str(int nb, int i, char *result, int irev)
{
    char *numbers = "0123456789";

    irev = 0;
    if (nb < 0) {
        irev = 1;
        result[0] = '-';
        nb = -nb;
        i++;
    }
    if ((nb / 10) > 0) {
        nbr_to_str(nb / 10, i + 1, result, irev);
        result[i] = numbers[nb % 10];
    } else {
        result[i] = numbers[nb];
    }
    result = my_revstrn(result, irev);
    return result;
}
