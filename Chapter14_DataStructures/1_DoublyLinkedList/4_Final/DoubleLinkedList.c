#include <stdio.h>
#include <stdlib.h>

#include "DoubleLinkedList.h"

/*********************/
/*    FUNCTIONS      */
/*********************/

list_t *createList()
{
    list_t *list = (list_t *)malloc(sizeof(list_t));

    if(!list)
    {
        return NULL;
    }

    list->head = NULL;
    list->tail = NULL;
    list->length = 0u;

    return list;
}

node_t *createNode(float value)
{
    node_t *node = (node_t *)malloc(sizeof(node_t));
    float *p_value = (float *)malloc(sizeof(float));
    *p_value = value;

    if (!node || !p_value)
    {
        return NULL;
    }

    node->prev = NULL;
    node->next = NULL;
    node->value = p_value;

    return node;
}

void rightPush(list_t *list, node_t *node)
{
    if (!node || !list)
    {
        return;
    }

    if(list->length > 0u)
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

    list->length++;
}

float rightPop(list_t *list)
{
    float value = *list->tail->value;

    node_t *node = list->tail;

    if(list->length > 1u)
    {
        list->tail = node->prev;
        list->tail->next = NULL;
    }
    else
    {
        list->tail = NULL;
        list->head = NULL;
    }

    list->length--;

    return value;
}


void leftPush(list_t *list, node_t *node)
{
    if (!node || !list)
    {
        return;
    }

    if(list->length > 0u)
    {
        node->prev = NULL;
        node->next = list->head;
        list->head->prev = node;
        list->head = node;
    }
    else
    {
        list->head = node;
        list->tail = node;
        node->prev = NULL;
        node->next = NULL;
    }

    list->length++;
}

float leftPop(list_t *list)
{
    float value = *list->head->value;

    node_t *node = list->head;

    if(list->length > 1u)
    {
        list->head = node->next;
        list->head->prev = NULL;
    }
    else
    {
        list->tail = NULL;
        list->head = NULL;
    }

    list->length--;

    return value;
}

node_t *findValue(list_t *list, float value)
{
    if (!list)
    {
        return NULL;
    }

    node_t *node = list->head;

    while(node != NULL)
    {
        if(*node->value == value)
        {
            return node;
        }

        node = node->next;
    }

    return NULL;
}

node_t *valueAtIndex(list_t *list, unsigned int index)
{
    if(!list || index >= list->length)
    {
        return NULL;
    }

    unsigned int current_index = 0u;
    node_t *node = list->head;

    while(current_index < list->length)
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

void clearList(list_t *list)
{
    if (!list)
    {
        return;
    }

    unsigned int length = list->length;
    node_t *next;
    node_t *current = list->head;

    while(length > 0u)
    {
        next = current->next;

        free(current->value);
        free(current);

        current = next;
        length--;
    }

    list->length = 0u;
    list->head = NULL;
    list->tail = NULL;
}

void removeNode(list_t *list, node_t *node)
{
    if (!list || !node)
    {
        return;
    }

    if(node->prev)
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

    free(node->value);
    free(node);

    list->length--;
}

void printList(list_t *list)
{
    if (!list)
    {
        return;
    }

    unsigned int index = 0;
    node_t *current = list->head;

    printf("\nList contains %d elements.\n", list->length);

    while(current != NULL)
    {
        printf("Index: %d, Value: %f", index, *current->value);
        current = current->next;
        index++;
    }
}
