/*
** EPITECH PROJECT, 2023
** del.c
** File description:
** del.c
*/

#include "include/shell.h"
#include "include/my.h"

void print_deleted(list *current)
{
    my_putstr(current->type);
    my_putstr(" n°");
    my_put_nbr(current->id);
    my_putstr(" - ");
    my_putchar('"');
    my_putstr(current->name);
    my_putchar('"');
    my_putstr(" deleted.");
}

int del_element(list *current, list *temp)
{
    list *temp2;

    print_deleted(current);
    my_putchar('\n');
    if (current->next != NULL) {
        temp2 = current;
        current = current->next;
        free(temp2->name);
        free(temp2->type);
        free(temp2);
        temp->next = current;
    } else {
        free(temp->next->name);
        free(temp->next->type);
        free(temp->next);
        temp->next = NULL;
    }
    return 0;
}

int parse(list *begin, int del_id)
{
    list *temp;
    list *current = begin;

    while (current->next != NULL && current->id != del_id) {
        temp = current;
        current = current->next;
    }
    if (current->id != del_id) {
        return 84;
    }
    return del_element(current, temp);
}

int del(void *data, char **args)
{
    int del_id;
    int argsi = 0;
    list *begin = data;
    int result = 0;

    if (args[0] == NULL) {
        return 84;
    }
    while (args[argsi] != NULL) {
        if (my_str_isnum(args[argsi]) == 0) {
            return 84;
        }
        del_id = my_getnbr(args[argsi]);
        result = parse(begin, del_id);
        argsi++;
    }
    return result;
}
