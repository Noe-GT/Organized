/*
** EPITECH PROJECT, 2023
** add.c
** File description:
** add.c
*/

#include "include/shell.h"
#include "include/my.h"

static int args_n(char **args)
{
    int n_args = 0;

    while (args[n_args] != NULL) {
        n_args++;
    }
    return n_args;
}

static void print_added(list *current)
{
    my_putstr(current->type);
    my_putstr(" n°");
    my_put_nbr(current->id);
    my_putstr(" - ");
    my_putchar('"');
    my_putstr(current->name);
    my_putchar('"');
    my_putstr(" added.");
    my_putchar('\n');
}

void assign_next(list *parse, list *new_elem)
{
    if (parse->id == -1) {
        new_elem->next = NULL;
        free(parse->name);
        free(parse->type);
        free(parse);
    } else {
        new_elem->next = parse;
    }
}

int add_chain(int position, char **args, list *parse, list *begin)
{
    list *new_elem = NULL;
    int i = 1;
    int n_args = args_n(args);

    while (i < n_args) {
        new_elem = malloc(sizeof(list));
        new_elem->name = my_strdup(args[i]);
        new_elem->type = my_strdup(args[i - 1]);
        new_elem->id = parse->id + 1;
        print_added(new_elem);
        assign_next(parse, new_elem);
        begin->next = new_elem;
        parse = new_elem;
        position++;
        i = i + 2;
    }
    return i;
}

static int not_valid(char *arg)
{
    char *valid[] = {"ACTUATOR", "DEVICE", "PROCESSOR", "SENSOR", "WIRE"};

    for (int i = 0; i < 5; i++) {
        if (my_strcmp(valid[i], arg) == 0) {
            return 0;
        }
    }
    return 1;
}

static int error_handler(int n_args, char **args)
{
    if (n_args == 0) {
        return 84;
    }
    if (n_args % 2 != 0) {
        return 84;
    }
    for (int i2 = 0; i2 < n_args; i2 = i2 + 2) {
        if (not_valid(args[i2])) {
            return 84;
        }
    }
    return 0;
}

int empty_exe(list *begin, char **args)
{
    list *parse = malloc(sizeof(list));
    int position = -1;

    parse->name = my_strdup("tail");
    parse->type = my_strdup("tail");
    parse->id = -1;
    parse->next = NULL;
    begin->next = parse;
    add_chain(position, args, parse, begin);
    return 0;
}

int normal_exe(list *begin, char **args)
{
    list *parse = begin->next;
    int position = -1;

    add_chain(position, args, parse, begin);
    return 0;
}

int add(void *data, char **args)
{
    list *begin = data;
    int n_args = args_n(args);

    if (error_handler(n_args, args) == 84) {
        return 84;
    }
    if (begin->next == NULL) {
        empty_exe(begin, args);
        return 0;
    }
    normal_exe(begin, args);
    return 0;
}
