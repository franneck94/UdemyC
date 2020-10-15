#ifndef DoubleLinkedList_H
#define DoubleLinkedList_H

typedef struct double_node
{
    struct double_node *next;
    struct double_node *prev;
    void *val;
} double_node_t;

typedef struct double_list
{
    struct double_node *head;
    struct double_node *tail;
    unsigned int len;
} double_list_t;

double_list_t *list_new();
double_node_t *node_new(void *val);

void list_rpush(double_list_t *list, double_node_t *node);
void list_rpop(double_list_t *list);
double_node_t *list_find(double_list_t *list, void *val);
double_node_t *list_at(double_list_t *list, int index);

void list_empty(double_list_t *list);
void list_remove(double_list_t *list, double_node_t *node);
void list_print(double_list_t *list);

#endif