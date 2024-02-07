/*
** EPITECH PROJECT, 2023
** my_strncpy.c
** File description:
** copies n characters from a string into another.
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int ind = 0;
    char f = *src;

    if (src[0] == '\0') {
        dest[0] = '\0';
    }
    while (f != '\0' && ind != n){
        dest[ind] = src[ind];
        f = src[ind];
        ind++;
    }
    if (ind > n){
        dest[n] = '\0';
    }
    return dest;
}
