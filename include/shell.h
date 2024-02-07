/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Setting Up Shell
** File description:
** shell.h
*/

#include "my_include.h"

#ifndef LIST_STRUCT
    #define LIST_STRUCT

typedef struct list {
    char *name;
    int id;
    char *type;
    struct list *next;
} list;

#endif /* LIST_STRUCT */

#ifndef SHELL_H
    #define SHELL_H

// To be implemented
int add(void *data, char **args);
int del(void *data, char **args);
int sort(void *data, char **args);
int disp(void *data, char **args);
void sort_merge(list **headl, char type, int rev);
int reverse(list *begin);

// Already implemented
int workshop_shell(void *data);

#endif /* SHELL_H */
