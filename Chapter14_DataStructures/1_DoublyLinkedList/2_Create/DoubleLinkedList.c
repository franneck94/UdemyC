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

}

float rightPop(list_t *list)
{

}


void leftPush(list_t *list, node_t *node)
{

}

float leftPop(list_t *list)
{

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
