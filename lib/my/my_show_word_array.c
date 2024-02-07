/*
** EPITECH PROJECT, 2023
** my_show_word_array
** File description:
** my_show_word_array
*/


#include "my.h"
#include <unistd.h>

int nbr_str(char *const *tab)
{
    int i = 0;

    while (tab[i] != 0){
        i++;
    }
    return i;
}

int my_show_word_array(char *const *tab)
{
    int len = 0;
    int nbr = nbr_str(tab);

    for (int i = 0; i < nbr; i++) {
        len = my_strlen(tab[i]);
        write(1, tab[i], len);
        my_putchar('\n');
    }
}
