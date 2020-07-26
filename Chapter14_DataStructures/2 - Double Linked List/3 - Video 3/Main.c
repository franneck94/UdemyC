#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "DoubleLinkedList.h"

int main()
{
    double_list_t* list = list_new();

    double_node_t* a = node_new("a");
    double_node_t* b = node_new("b");
    double_node_t* c = node_new("c");

    // a b c
    list_rpush(list, a);
    list_rpush(list, b);
    list_rpush(list, c);
    
    // Assertions
    assert(a == list->head);
    assert(b == list->head->next);
    assert(c == list->tail);
    assert(3 == list->len);

    // empty
    list_empty(list);

    // Assertions
    assert(NULL == list->head);
    assert(NULL == list->tail);
    assert(0 == list->len);

    double_node_t* d = node_new("d");
    double_node_t* e = node_new("e");

    list_lpush(list, d);
    list_lpush(list, e);

    // E D
    assert(e == list->head);
    assert(d == list->tail);

    list_print(list);

    return 0;
}