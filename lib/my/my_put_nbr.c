/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** my_put_nbr
*/

#include <unistd.h>
#include "../../include/my.h"

int my_put_nbr(int nbr)
{
    if (nbr == -2147483648){
        my_putstr("-2147483648");
    }
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
