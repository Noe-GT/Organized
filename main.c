/*
** EPITECH PROJECT, 2023
** organized.c
** File description:
** organized.c
*/

#include "include/shell.h"
#include "include/my.h"
#include <stdlib.h>
#include <stdio.h>

void free_all(list *current)
{
    list *temp;

    while (current->next != NULL) {
        free(current->name);
        free(current->type);
        temp = current;
        current = current->next;
        free(temp);
    }
}

int main(int argc, char **argv)
{
    list *begin = malloc(sizeof(list));
    list *current = begin;
    int result = 0;

    begin->name = my_strdup("head");
    begin->type = my_strdup("head");
    begin->id = -2;
    result = workshop_shell(begin);
    free_all(current);
    return result;
}
