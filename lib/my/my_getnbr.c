/*
** EPITECH PROJECT, 2023
** my_getnbr
** File description:
** my_getnbr
*/

#include <unistd.h>

int my_getnbr(char const *str)
{
    int i = 0;
    int sign = 1;
    long long result = 0;

    while (str[i] == '-' || str[i] == '+'){
        if (str[i] == 45){
            sign = sign * -1;
        }
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9'){
            result = result * 10;
            result = result + str[i] - 48;
            i++;
        }
    }
    return (result * sign);
}
