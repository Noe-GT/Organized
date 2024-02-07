/*
** EPITECH PROJECT, 2023
** my_compute_power_rec
** File description:
** my_compute_power_rec
*/
#include <unistd.h>

int my_compute_power_rec(int nb, int p)
{
    if (p > 0) {
        return nb * my_compute_power_rec(nb, (p - 1));
    } else if (p == 0) {
        return 1;
    } else {
        return 0;
    }
}
