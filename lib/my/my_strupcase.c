/*
** EPITECH PROJECT, 2023
** my_strupcase.c
** File description:
** Puts every letter of every word in it in uppercase.
*/

char *my_strupcase(char *str)
{
    int ind = 0;
    char up;

    while (str[ind] != '\0') {
        up = str[ind] - 32;
        str[ind] = up;
        ind++;
    }
    return str;
}
