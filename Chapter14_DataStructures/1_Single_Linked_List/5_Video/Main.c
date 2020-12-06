#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "SingleLinkedList.h"

int main()
{
    single_list_t* list = list_new();

    single_node_t* a = node_new("a");
    single_node_t* b = node_new("b");
    single_node_t* c = node_new("c");

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

    single_node_t* d = node_new("d");
    single_node_t* e = node_new("e");
    single_node_t* f = node_new("f");

    // d e f
    list_rpush(list, d);
    list_rpush(list, e);
    list_rpush(list, f);

    // d e
    list_remove(list, f);

    // Assertions
    assert(d == list->head);
    assert(e == list->tail);
    assert(2 == list->len);

    // Search for the value "d"
    single_node_t* result_find = list_find(list, "e");
    if (result_find != NULL)
    {
        printf("Element %s is in the list\n", result_find->val);
    }
    else
    {
        printf("Element %s is not in the list!\n", result_find->val);
    }

    int index = 2;
    single_node_t* result_at = list_at(list, index);
    if (result_at != NULL)
    {
        printf("Index %d has the value of %s\n", index, result_at->val);
    }
    else
    {
        printf("Index %d is out of bounds\n", index);
    }

    return 0;
}