#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node* next;
};

struct node* insertBeginning(struct node* head,int value)
{
    struct node* newnode;

    newnode = (struct node*)malloc(sizeof(struct node));

    newnode -> data = value;
    newnode -> next = head;

    head = newnode;
    return head;
}