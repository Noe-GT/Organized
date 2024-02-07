/*
** EPITECH PROJECT, 2023
** my_strstr.c
** File description:
** Returns 1 if the string passed as parameter only contains digits
** and 0 otherwise.
*/

int my_str_isnum(char const *str)
{
    int ind = 0;

    while (str[ind] != '\0') {
        if (str[ind] >= '0' && str[ind] <= '9') {
            ind++;
        } else {
            return 0;
        }
    }
    return 1;
}
