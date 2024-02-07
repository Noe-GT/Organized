/*
** EPITECH PROJECT, 2023
** my_strstr.c
** File description:
** Returns 1 if the string passed as parameter only contains
** printable characters and 0 otherwise.
*/

int my_str_isprintable(char const *str)
{
    int ind = 0;
    char ch;

    while (str[ind] != '\0') {
        ch = str[ind];
        if (ch >= ' ' && ch <= '~') {
            ind++;
        } else {
            return 0;
        }
    }
    return 1;
}
