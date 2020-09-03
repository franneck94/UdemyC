#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "SingleLinkedList.h"

single_list_t *list_new()
{
    single_list_t *new_list = (single_list_t *)malloc(sizeof(single_list_t));
    if (!new_list)
        return NULL;

    new_list->head = NULL;
    new_list->tail = NULL;
    new_list->len = 0;

    return new_list;
}

single_node_t *node_new(void *val)
{
    single_node_t *new_node = (single_node_t *)malloc(sizeof(single_node_t));
    if (!new_node)
        return NULL;

    new_node->next = NULL;
    new_node->val = val;

    return new_node;
}

single_node_t *find_prev_node(single_list_t *list, single_node_t *node)
{
    if (!list || !node)
        return NULL;

    single_node_t *curr = list->head;
    while (curr->next != node)
    {
        curr = curr->next;
    }

    return curr;
}

void list_rpush(single_list_t *list, single_node_t *node)
{
    if (!node || !list)
        return;

    if (list->len > 0)
    {
        node->next = NULL;
        list->tail->next = node;
        list->tail = node;
    }
    else
    {
        node->next = NULL;
        list->head = node;
        list->tail = node;
    }

    list->len++;
}

void list_rpop(single_list_t *list)
{
    if (!list || list->len == 0)
        return;

    // A -> B (head=a, tail=b, a->next=b, b->next=null)
    // A (head=a, tail=a, a->next=null)

    single_node_t *node = list->tail;
    single_node_t *prev = find_prev_node(list, node);

    if (list->len > 1)
    {
        list->tail = prev;
        list->tail->next = NULL;
    }
    else
    {
        list->tail = NULL;
        list->head = NULL;
    }

    list->len--;
}