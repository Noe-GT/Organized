/*
** EPITECH PROJECT, 2023
** my_find_prime_sup.c
** File description:
** returns the smallest prime number that is greater than, or equal to,
** the number given as a parameter
*/

#include <stdlib.h>
#include "../../include/my.h"

int my_find_prime_sup(int nb)
{
    int testprime = 0;

    while (testprime == 0) {
        testprime = my_is_prime(nb);
        if (testprime == 1) {
            return nb;
        } else {
            nb++;
        }
    }
}
