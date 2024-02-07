/*
** EPITECH PROJECT, 2023
** my_compute_square_root.c
** File description:
** returns the square root (if it is a whole number)
** of the number given as argumen
*/

int my_compute_square_root(int nb)
{
    int i = 1;
    int result = 0;

    while (result < nb) {
        result = i * i;
        i++;
    }
    if (result == nb) {
        return i -1;
    } else {
        return 0;
    }
}
