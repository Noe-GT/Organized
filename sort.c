/*
** EPITECH PROJECT, 2023
** sort.c
** File description:
** sort.c
*/

#include "include/shell.h"
#include "include/my.h"

static int type_sort(list *begin, int rev, int i)
{
    list *start = begin->next;

    if (i == 1) {
        if (rev == 0) {
            sort_merge(&start, 't', 1);
        }
        if (rev == 1) {
            sort_merge(&start, 't', 0);
        }
    } else {
        sort_merge(&start, 't', rev);
    }
    begin->next = start;
    return 0;
}

static int name_sort(list *begin, int rev, int i)
{
    list *start = begin->next;

    if (i == 1) {
        if (rev == 0) {
            sort_merge(&start, 'n', 1);
        }
        if (rev == 1) {
            sort_merge(&start, 'n', 0);
        }
    } else {
        sort_merge(&start, 'n', rev);
    }
    begin->next = start;
    return 0;
}

static int id_sort(list *begin, int rev, int i)
{
    list *start = begin->next;

    if (i == 1) {
        if (rev == 0) {
            sort_merge(&start, 'i', 1);
        }
        if (rev == 1) {
            sort_merge(&start, 'i', 0);
        }
    } else {
        sort_merge(&start, 'i', rev);
    }
    begin->next = start;
    return 0;
}

int call_test(list *begin, char **args, int i, int rev)
{
    if (my_strcmp(args[i], "TYPE") == 0) {
        type_sort(begin, rev, i);
        return 0;
    }
    if (my_strcmp(args[i], "NAME") == 0) {
        name_sort(begin, rev, i);
        return 0;
    }
    if (my_strcmp(args[i], "ID") == 0) {
        id_sort(begin, rev, i);
        return 0;
    }
    if (my_strcmp(args[i], "-r") == 0) {
        call_test(begin, args, i - 1, 1);
        return 1;
    }
    return 84;
}

int sort(void *data, char **args)
{
    list *begin = data;
    int i = 0;
    int result = 0;

    if (args[0] == NULL) {
        return 84;
    }
    while (args[i] != NULL) {
        i++;
    }
    i--;
    while (i >= 0) {
        result = call_test(begin, args, i, 0);
        if (result == 84) {
            return 84;
        }
        i -= result;
        i--;
    }
    return 0;
}
