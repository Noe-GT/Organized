/*
** EPITECH PROJECT, 2023
** my_strstr.c
** File description:
** Returns 1 if the string passed as parameter only contains
** uppercase alphabetical characters and 0 otherwise.
*/

int my_str_isupper(char const *str)
{
    int ind = 0;
    char ch;

    while (str[ind] != '\0') {
        ch = str[ind];
        if (ch >= 'A' && ch <= 'Z') {
            ind++;
        } else {
            return 0;
        }
    }
    return 1;
}
