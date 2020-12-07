#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "DoubleLinkedList.h"

double_list_t *list_new()
{
    double_list_t *new_list = (double_list_t *)malloc(sizeof(double_list_t));
    if (!new_list)
        return NULL;

    new_list->head = NULL;
    new_list->tail = NULL;
    new_list->len = 0;

    return new_list;
}

double_node_t *node_new(void *val)
{
    double_node_t *new_node = (double_node_t *)malloc(sizeof(double_node_t));
    if (!new_node)
        return NULL;

    new_node->next = NULL;
    new_node->prev = NULL;
    new_node->val = val;

    return new_node;
}

void list_rpush(double_list_t *list, double_node_t *node)
{
    if (!node || !list)
        return;

    if (list->len > 0)
    {
        node->next = NULL;
        node->prev = list->tail;
        list->tail->next = node;
        list->tail = node;
    }
    else
    {
        node->next = NULL;
        node->prev = NULL;
        list->head = node;
        list->tail = node;
    }

    list->len++;
}

void list_rpop(double_list_t *list)
{
    if (!list || list->len == 0)
        return;

    double_node_t *node = list->tail;

    if (list->len > 1)
    {
        list->tail = node->prev;
        list->tail->next = NULL;
    }
    else
    {
        list->tail = NULL;
        list->head = NULL;
    }

    list->len--;
}

double_node_t *list_find(double_list_t *list, void *val)
{
    if (!list)
        return NULL;

    double_node_t *node = list->head;

    while (node != NULL)
    {
        if (node->val == val)
        {
            return node;
        }

        node = node->next;
    }

    return NULL;
}

double_node_t *list_at(double_list_t *list, int index)
{
    if (!list || index < 0 || index >= list->len)
        return NULL;

    int current_index = 0;
    double_node_t *node = list->head;

    while (current_index < list->len)
    {
        if (current_index == index)
        {
            return node;
        }

        node = node->next;
        current_index++;
    }

    return NULL;
}

void list_empty(double_list_t *list)
{
    if (!list)
        return;

    unsigned int len = list->len;
    double_node_t *next;
    double_node_t *curr = list->head;

    while (len > 0)
    {
        next = curr->next;

        free(curr);
        curr = next;
        len--;
    }

    list->len = 0;
    list->head = NULL;
    list->tail = NULL;
}

void list_remove(double_list_t *list, double_node_t *node)
{
    if (!list || !node)
        return;

    if (node->prev)
    {
        node->prev->next = node->next;
    }
    else
    {
        list->head = node->next;
    }

    if (node->next)
    {
        node->next->prev = node->prev;
    }
    else
    {
        list->tail = node->prev;
    }

    free(node);
    list->len--;
}

void list_print(double_list_t *list)
{
    if (!list)
        return;

    int index = 0;
    double_node_t *node = list->head;
    printf("\nPrinting DoubleLinkedList that contains %d elements.\n", list->len);

    while (node != NULL)
    {
        printf("Current node  value: %s, At position %d.\n", node->val, index);
        node = node->next;
        index++;
    }
}