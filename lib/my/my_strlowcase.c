/*
** EPITECH PROJECT, 2023
** my_strlowcase.c
** File description:
** Puts every letter of every word in it in lowercase.
*/

char *my_strlowcase(char *str)
{
    int ind = 0;
    char up;

    while (str[ind] != '\0') {
        up = str[ind] + 32;
        str[ind] = up;
        ind++;
    }
    return str;
}
