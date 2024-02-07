/*
** EPITECH PROJECT, 2023
** disp.c
** File description:
** disp.c
*/

#include "include/shell.h"
#include "include/my.h"

void print(list *current)
{
    my_putstr(current->type);
    my_putstr(" n°");
    my_put_nbr(current->id);
    my_putstr(" - ");
    my_putchar('"');
    my_putstr(current->name);
    my_putchar('"');
    my_putchar('\n');
}

int print_elements(list *head, char **args)
{
    list *current = head->next;

    while (current->next != NULL) {
        print(current);
        current = current->next;
    }
    if (current->id != -1) {
        print(current);
    }
    return 0;
}

int disp(void *data, char **args)
{
    list *head = data;

    if (args[0] != NULL) {
        return 84;
    }
    if (head->next != NULL) {
        print_elements(head, args);
    }
    return 0;
}
