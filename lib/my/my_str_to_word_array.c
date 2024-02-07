/*
** EPITECH PROJECT, 2023
** my_str_to_word_array.c
** File description:
** splits a string into words
*/

#include <stdlib.h>
#include "../../include/my.h"

#include <stdio.h>

static int is_sep(char character)
{
    if (character >= 'a' && character <= 'z') {
        return 0;
    }
    if (character >= 'A' && character <= 'Z') {
        return 0;
    }
    if (character >= '1' && character <= '9') {
        return 0;
    }
    return 1;
}

static int num_of_words(char const *str)
{
    int length = my_strlen(str);
    int i = 0;
    int cpt = 0;

    while (i < length) {
        if (is_sep(str[i])) {
            cpt++;
        }
        i++;
    }
    return cpt + 1;
}

static int *word_length(char const *str, int num_of_w)
{
    int *word_l;
    int cpt = 0;
    int i2 = 0;
    int i = 0;

    word_l = malloc(sizeof(int) * num_of_w);
    while (i2 < num_of_w) {
        while (!(is_sep(str[i]))) {
            cpt++;
            i++;
        }
        word_l[i2] = cpt;
        i2++;
        i++;
        cpt = 0;
    }
    return word_l;
}

static char *put_word(int i3, char const *str, char *word)
{
    int i2 = 0;

    while (!(is_sep(str[i3]))) {
            word[i2] = str[i3];
            i3++;
            i2++;
        }
    return word;
}

char **my_str_to_word_array(char const *str)
{
    char *word;
    int i = 0;
    int i2 = 0;
    int i3 = 0;
    int num_of_w = num_of_words(str);
    int *word_l = word_length(str, num_of_w);
    char **result = malloc(sizeof(char *) * num_of_w + 1);

    while (i < num_of_w) {
        word = malloc(sizeof(char) * (word_l[i]));
        put_word(i3, str, word);
        i3 = i3 + word_l[i];
        result[i] = malloc(sizeof(char) * word_l[i]);
        result[i] = word;
        i++;
        i3++;
    }
    result[i] = 0;
    free(word_l);
    return result;
}
