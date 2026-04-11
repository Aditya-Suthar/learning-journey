#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coeff;
    int exp;
    struct node *next;
}

struct node* create_node(int c,int e)
{
    struct node *newnode = (struct node*)(malloc(sizeof(struct node)));
    newnode->coeff = c;
    newnode->exp = e;
    newnode->next = NULL;

    return newnode;
}

struct node *insert(struct node *start, int c, int e)
{
    struct node *newnode = create_node(c,e);

    if (start == NULL)
    {
        return newnode;
    }

    struct node *ptr = start;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    
    ptr->next = newnode;
    return start;
}

struct node* add_poly(struct node *a,struct node *b)
{
    struct node *result = NULL;

    while (a!= NULL && b!= NULL)
    {
        if (a->exp == b->exp)
        {
            result = insert(result,a->coeff + b->coeff,a->exp);
            a = a->next;
            b = b->next;
        }

        else if (a->exp > b->exp)
        {
            result = insert (result, a->coeff, a->exp);
            a = a->next;
        }

        else
        {
            result = insert(result, b->coeff ,b->exp);
            b = b->next;
        }
    }
}

