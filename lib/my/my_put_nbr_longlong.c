/*
** EPITECH PROJECT, 2023
** my_put_nbr_short
** File description:
** my_put_nbr_short
*/
#include <unistd.h>
#include "../../include/my.h"

void my_put_nbr_longlong(long long nbr)
{
    if (nbr < 0){
        my_putchar('-');
        nbr = nbr * -1;
    }
    if (nbr < 10){
        my_putchar(nbr + 48);
    } else if (nbr >= 10){
        my_put_nbr(nbr / 10);
        my_putchar(nbr % 10 + 48);
    }
}
