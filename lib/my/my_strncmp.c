/*
** EPITECH PROJECT, 2023
** my_strstr.c
** File description:
** Reproduce the behavior of the strcmp function.
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int ind = 0;
    int compare;

    while (s1[ind] != '\0' && s2[ind] != '\0' && ind < n) {
        compare = s1[ind] - s2[ind];
        if (compare != 0) {
            return compare;
        }
        ind++;
    }
    if (s2[ind] == '\0') {
        compare = 0 + s1[ind];
        return compare;
    } else if (s1[ind] == '\0') {
        compare = 0 - s2[ind];
        return compare;
    } else {
        return 0;
    }
}
