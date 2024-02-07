/*
** EPITECH PROJECT, 2023
** my_is_prime.c
** File description:
** returns 1 if the number is prime and 0 if not.
*/

int my_is_prime(int nb)
{
    int ind = 2;
    int mod = 1;

    if (nb <= 1) {
        return 0;
    }
    while (ind < 100 && ind < nb && mod != 0) {
        mod = 1;
        mod = nb % ind;
        ind++;
    }
    if (mod == 0) {
        return 0;
    } else {
        return 1;
    }
}
