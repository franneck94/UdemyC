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