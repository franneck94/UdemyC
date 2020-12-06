// Node: A
// Node: B
// Node: C
// A -> B -> C
// Head (Anfang): A
// Tail (Ende): C
// len: 3

#ifndef SingleLinkedList_H
#define SingleLinkedList_H

typedef struct single_node
{
    struct single_node* next;
    void* val;
} single_node_t;

typedef struct single_list
{
    struct single_node* head;
    struct single_node* tail;
    unsigned int len;
} single_list_t;

single_list_t* list_new();
single_node_t* node_new(void* val);

#endif // FUNCTIONS_BIB_H