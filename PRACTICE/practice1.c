#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};


struct node* createNode(int data)
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("MEMORY ALLOCATION FAILED\n");
        return 0;
    }

    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
}
int main ()
{
    struct node* root;
    root = createNode(20);

    root->left = createNode(10);
    root->right = createNode(30);
    return 0;
}