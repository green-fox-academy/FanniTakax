#ifndef INC_01_LINKED_LIST_LINKED_LIST_H
#define INC_01_LINKED_LIST_LINKED_LIST_H

typedef struct node{
    int value;
    struct node*  next;
}node_t;

node_t* init_linked_list();

node_t* push_front_list(node_t* head, int value);
node_t* push_back_list(node_t** head, int value);

#endif //INC_01_LINKED_LIST_LINKED_LIST_H
