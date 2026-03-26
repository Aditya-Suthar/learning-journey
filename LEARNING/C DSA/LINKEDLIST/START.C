#include <stdio.h>

#include <stdlib.h>

struct node
{
    int data;
    struct node* link;
};

int main ()
{
    struct node *head;
    struct node *temp;
    struct node *newnode;


    int n;

    printf ("Enter the number of nodes:-");
    scanf ("%d",&n);


    // traversal

    struct node* temp = head;

    while (temp != NULL)
    {
        printf("%d",temp->data);
        temp = temp->link;
    }


    return 0;
}
