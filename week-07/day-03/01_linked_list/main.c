#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main()
{
    node_t* head = NULL;
    printf("%p\n", head);

    node_t* node1 = push_back_list(&head, 6);

    node_t* node2 = push_back_list(&head, 8);

    printf("%p\n", head);

    node_t* p = head;
    while(p != NULL){
        printf("%d\n", p->value);
        p = p->next;
    }




    return 0;
}