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

    //node_t* node7 = insert_after_value(head, 5, 4);

    node_t* p = head;
    while(p != NULL){
        printf("%d\n", p->value);
        p = p->next;
    }




    return 0;
}