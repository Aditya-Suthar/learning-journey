#include <stdlib.h>
#include <stdio.h>

struct node *insert_end(struct node* start)
{
    struct node *ptr, *new_node;

    int num;

    printf ("Enter the value:");
    scanf ("%d",&num);

    new_node = (struct node*)malloc(sizeof(struct node))

    new_node -> data = num;
    new_node -> next = NULL;

    ptr = start;

    while ( ptr -> next != NULL)
    {
        ptr = ptr -> next;
    }

    ptr -> next = new_node;

    return start;
    

}