/*
** EPITECH PROJECT, 2023
** merge_sort.c
** File description:
** merge_sort.c
*/

#include "include/shell.h"
#include "include/my.h"

void split(list *src, list **head, list **tail)
{
    list *fast;
    list *slow;

    slow = src;
    fast = src->next;
    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }
    *head = src;
    *tail = slow->next;
    slow->next = NULL;
}

list *sortsub_id(list *lsta, list *lstb, int r)
{
    list *result = NULL;

    if (lsta == NULL) {
        return (lstb);
    } else if (lstb == NULL) {
        return (lsta);
    }
    if ((r == 0 && lstb->id <= lsta->id) || (r == 1 && lstb->id >= lsta->id)) {
        result = lstb;
        result->next = sortsub_id(lsta, lstb->next, r);
    } else {
        result = lsta;
        result->next = sortsub_id(lsta->next, lstb, r);
    }
    return (result);
}

list *sortsub_name(list *lsta, list *lstb, int r)
{
    list *result = NULL;
    int cmp;

    if (lsta == NULL) {
        return (lstb);
    } else if (lstb == NULL) {
        return (lsta);
    }
    cmp = my_strcmp(lstb->name, lsta->name);
    if ((r == 0 && cmp <= 0) || (r == 1 && cmp >= 0)) {
        result = lstb;
        result->next = sortsub_name(lsta, lstb->next, r);
    } else {
        result = lsta;
        result->next = sortsub_name(lsta->next, lstb, r);
    }
    return (result);
}

list *sortsub_type(list *lsta, list *lstb, int r)
{
    list *result = NULL;
    int cmp;

    if (lsta == NULL) {
        return (lstb);
    } else if (lstb == NULL) {
        return (lsta);
    }
    cmp = my_strcmp(lstb->type, lsta->type);
    if ((r == 0 && cmp <= 0) || (r == 1 && cmp >= 0)) {
        result = lstb;
        result->next = sortsub_type(lsta, lstb->next, r);
    } else {
        result = lsta;
        result->next = sortsub_type(lsta->next, lstb, r);
    }
    return (result);
}

void sort_merge(list **headl, char type, int rev)
{
    list *head = *headl;
    list *lsta;
    list *lstb;

    if ((head == NULL) || (head->next == NULL)) {
        return;
    }
    split(head, &lsta, &lstb);
    sort_merge(&lsta, type, rev);
    sort_merge(&lstb, type, rev);
    if (type == 'i') {
        *headl = sortsub_id(lsta, lstb, rev);
    }
    if (type == 'n') {
        *headl = sortsub_name(lsta, lstb, rev);
    }
    if (type == 't') {
        *headl = sortsub_type(lsta, lstb, rev);
    }
}
