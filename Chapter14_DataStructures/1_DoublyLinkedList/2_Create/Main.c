#include <stdio.h>
#include <stdlib.h>

#include "DoubleLinkedList.h"

int main()
{
    list_t *list = createList();

    node_t *a = createNode(1.0f);
    node_t *b = createNode(2.0f);
    node_t *c = createNode(3.0f);

    return 0;
}