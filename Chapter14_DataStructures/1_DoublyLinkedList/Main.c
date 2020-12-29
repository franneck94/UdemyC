#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "DoubleLinkedList.h"

int main()
{
    list_t *list = createList();

    node_t *a = createNode(1.0f);
    node_t *b = createNode(2.0f);
    node_t *c = createNode(3.0f);

    // a b c
    rightPush(list, a);
    rightPush(list, b);
    rightPush(list, c);

    // Assertions
    assert(a == list->head);
    assert(b == list->head->next);
    assert(c == list->tail);
    assert(3 == list->length);

    // empty
    clearList(list);

    // Assertions
    assert(NULL == list->head);
    assert(NULL == list->tail);
    assert(0 == list->length);

    node_t *d = createNode(4.0f);
    node_t *e = createNode(5.0f);

    leftPush(list, d);
    leftPush(list, e);

    // E D
    assert(e == list->head);
    assert(d == list->tail);

    printList(list);

    return 0;
}