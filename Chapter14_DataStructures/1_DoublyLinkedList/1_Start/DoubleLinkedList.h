#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

/*********************/
/* DEFINES AND TYPES */
/*********************/

typedef struct node
{
    node_t *next;
    node_t *prev;
    float *value;
} node_t;

typedef struct list
{
    node_t *head;
    node_t *tail;
    unsigned int length;
} list_t;

/*********************/
/*    FUNCTIONS      */
/*********************/

list_t *createList();
node_t *createNode(float value);

void rightPush(list_t *list, node_t *node);
float rightPop(list_t *list);

void leftPush(list_t *list, node_t *node);
float leftPop(list_t *list);

node_t *findValue(list_t *list, float value);
node_t *valueAtIndex(list_t *list, unsigned int index);

void clearList(list_t *list);
void removeNode(list_t *list, node_t *node);
void printList(list_t *list);

#endif // DOUBLE_LINKED_LIST_H
