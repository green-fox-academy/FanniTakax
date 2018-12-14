#ifndef INC_01_LINKED_LIST_LINKED_LIST_H
#define INC_01_LINKED_LIST_LINKED_LIST_H

typedef struct node{
    int value;
    struct node*  next;
}node_t;

node_t* init_node();

node_t* push_front_list(node_t** head, int value);
node_t* push_back_list(node_t** head, int value);
node_t* insert_after_node(node_t* head, int value, node_t* node);
node_t* insert_after_value(node_t* head, int value, int value_after);
int size(node_t* head);
int is_empty(node_t* head);
node_t* delete_first(node_t** head);

#endif //INC_01_LINKED_LIST_LINKED_LIST_H
