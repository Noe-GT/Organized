/*
** EPITECH PROJECT, 2023
** my_strlen.c
** File description:
** function that counts and returns the number of characters
** found in the string passed as parameter
*/

int my_strlen(char const *str)
{
    int ind = 0;

    while (str[ind] != '\0') {
        ind++;
    }
    return ind;
}
