#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main()
{
    node_t* head = NULL;
    node_t* node1 = push_back_list(&head, 6);
    node_t* node2 = push_back_list(&head, 8);
    node_t* node3 = push_front_list(&head, 4);
    node_t* node4 = push_front_list(&head, 2);
    node_t* node5 = push_back_list(&head, 10);
    node_t* node6 = insert_after_node(head, 3, node4);
    node_t* node7 = insert_after_value(head, 5, 4);
    node_t* node8 = insert_after_value(head, 7, 6);
    node_t* node9 = insert_after_value(head, 11, 9);
    node_t* node10 = insert_after_value(head, 9, 8);
    node_t* node11 = push_front_list(&head, 1);
    node_t* node12 = push_back_list(&head, 12);
    node_t* node13 = push_front_list(&head, 666);

    delete_first(&head);


    node_t* p = head;
    while(p != NULL){
        printf("%d\n", p->value);
        p = p->next;
    }

    printf("Size of the linked list: %d\n", size(head));

    if(is_empty(head)){
        puts("The list is empty.");
    }else{
        printf("List is not empty, it contains %d elements.", size(head));
    }

    return 0;
}