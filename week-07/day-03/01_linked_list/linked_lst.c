#include <stdlib.h>
#include "linked_list.h"

node_t* init_node()
{
    node_t* node = malloc(sizeof(node_t));
    return node;
}

node_t* push_front_list(node_t** head, int value)
{
    node_t* new_node = init_node();
    new_node->value = value;
    if(head == NULL){
        *head = new_node;
        new_node->next = NULL;
        return new_node;
    }else{
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }
}

node_t* push_back_list(node_t** head, int value)
{
    node_t *new_node = init_node();
    new_node->value = value;
    node_t *p = *head;
    if (p == NULL) {
        *head = new_node;
        new_node->next = NULL;
        return p;
    }

    while (p->next != NULL) {
        p = p->next;
    }
    p->next = new_node;
    new_node->next = NULL;
    return new_node;
}

node_t* insert_after_node(node_t* head, int value, node_t* node)
{
    node_t *new_node = init_node();
    new_node->value = value;

    new_node->next = node->next;
    node->next = new_node;
    return new_node;
}


//NEMMUKODIK
node_t* insert_after_value(node_t* head, int value, int value_after)
{
    node_t *new_node = init_node();
    new_node->value = value;

    node_t *p = head;
    while(p != NULL){
        p = p->next;
        if(p->value == value_after){
            new_node->next = p->next;
            p->next = new_node;
            return new_node;
        }else{
            p->next = new_node;
            new_node->next = NULL;
            return new_node;
        }
    }
}








