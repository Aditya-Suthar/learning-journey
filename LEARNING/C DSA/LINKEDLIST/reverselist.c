#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *ll(struct node *start);

int main ()

{
    struct node *start = NULL;

    start = ll(start);

    return 0;
}

struct node *ll(struct node *start)
{
    struct node *temp = NULL;
    int n,data;

    printf ("Enter the number of nodes used in linked list");
    scanf ("%d",&n);

    for (int i=0;i<n;i++)
    {
        printf ("Enter data:");
        scanf ("%d",&data);

        struct node *newnode = (struct node *)(malloc(sizeof(struct node)));
        newnode->data = data;
        newnode-> = NULL;

        if (start == NULL)
        {
            start = newnode;
            temp = newnode;
        }

        else
        {
            temp-> = newnode;
            temp = newnode;
        }
    }

    return start;
};

void display (struct node *start)
{
    struct node *temp = start;

    if(start == NULL)
    {
        printf ("NULL");
        return;
    }

    while (temp != NULL)
    {
        printf ("%d\n",temp->data);
        temp = temp->;
    }
}

struct node *insbeg(struct node *start)
{
    struct node *newnode,*temp = start;
    int data;

    newnode = (struct node*)(malloc(sizeof(struct node)));

    printf ("Enter the data:-");
    scanf ("%d",&data);

    if (start == NULL)
    {
        start = newnode;
        newnode->data = data;
        newnode-> = NULL;
        return start;
    }

    temp = start;
    start = newnode;


    newnode->data = data;
    newnode-> = temp;

    return start;

};

struct node *insend(struct node *start)
{
    int data;
    struct node *temp = start,*newnode;

    newnode = (struct node*)(malloc(sizeof(struct node)));

    printf ("Enter data:-");
    scanf ("%d",&data);

    // NULL CASE
    if (start == NULL)
    {
        newnode->data = data;
        newnode->link = NULL;
        start = newnode;
        return start;
    }

    while (temp->link != NULL)
    {
        temp = temp->link;
    }


    temp->link = newnode;
    newnode->data = data;
    newnode->link = NULL;

    return start;

};

struct node *insafterval(struct node *start)
{
    struct node *temp = start,*prev = NULL;
    struct node *newnode = (struct node*)(malloc(sizeof(struct node)));
    int num,data;

    printf ("Enter the value after which insertion has to happen:-");
    scanf ("%d",&num);

    if (start == NULL)
    {
        printf("ERROR EMPTY LIST");
        return start;
    }

    while (temp!= NULL && num != temp->data)
    {
        temp = temp->link;
    }

    if (temp == NULL)
    {
        printf ("Not Found");
        return start;
    }

    printf ("Element found !\n");
    printf ("Enter the data to be inserted");
    scanf ("%d",&data);

    newnode->link = temp->link;
    temp->link = newnode;
    newnode->data = data;

    return start;

};

struct node *deletenodebyvalue(struct node *start)
{
    struct node *temp = start;

    int num;

    printf ("Enter number to be deleted:-");
    scanf ("%d",&num);

    if (start == NULL)
    {
        printf ("EMPTY LIST ERROR");
        return start;
    }

    if (temp->data == num)
    {
        start = start->link;
        return start;
    }

    while (temp->link!= NULL && (temp->link)->data != num)
    {
        temp = temp->link;
    }

    if (temp->link == NULL)
    {
        printf ("ELEMENT NOT FOUND TRY AGAIN :-(");
        return start;
    }

    temp->link = (temp->link)->link;
    return start;


};


struct node* displayreverse (struct node *start)
{
    struct node *prev = NULL;
    struct node *curr = start;
    struct node * = NULL;

    while (curr != NULL)
    {
         = curr->link;
        curr->link = prev;
        prev = curr;
        curr = ;
    }

    start = prev;

    return start;
}


