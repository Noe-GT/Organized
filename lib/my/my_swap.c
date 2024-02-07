/*
** EPITECH PROJECT, 2023
** my_swap.c
** File description:
** swaps the content of two integers,
** whose addresses are given
*/

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
