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

}

node_t *valueAtIndex(list_t *list, unsigned int index)
{

}

void clearList(list_t *list)
{

}

void removeNode(list_t *list, node_t *node)
{

}

void printList(list_t *list)
{

}
