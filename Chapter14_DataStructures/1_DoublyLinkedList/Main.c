#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "DoubleLinkedList.h"

int main()
{
    list_t *list = createList();

    node_t *a = createNode(1.0f);
    node_t *b = createNode(2.0f);
    node_t *c = createNode(3.0f);

    rightPush(list, a);
    rightPush(list, b);
    rightPush(list, c);

    assert(a == list->head);
    assert(b == list->head->next);
    assert(c == list->tail);
    assert(3u == list->length);

    clearList(list);

    assert(NULL == list->head);
    assert(NULL == list->tail);
    assert(0u == list->length);

    node_t *d = createNode(4.0f);
    node_t *e = createNode(5.0f);

    leftPush(list, d);
    leftPush(list, e);

    assert(e == list->head);
    assert(d == list->tail);

    printList(list);

    return 0;
}