#include <stdlib.h>
#include "linked_list.h"

node_t* init_linked_list()
{
    node_t* node = malloc(sizeof(node_t));
    return node;
}

node_t* push_front_list(node_t* head, int value)
{
    node_t* new_node = init_linked_list();
    new_node->value = value;
    new_node->next = head->next;
    head->next = new_node;
    return new_node;
}

node_t* push_back_list(node_t* head, int value)
{
    node_t* new_node = init_linked_list();
    new_node->value = value;
    node_t* p = head;
    while(p != NULL){
        p = p->next;
        }
    p->next = new_node;
    new_node->next = NULL;
    return new_node;
}

