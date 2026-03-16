// insert before 

struct node *ins_before(struct node *start)
{
    int val,pos;

    printf ("Enter the data");
    scanf ("%d",&val);

    printf ("Enter the value before which the data has to be inserted");
    scanf ("%d",&num);

    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode -> data = val;

    while ( ptr -> data != val)
    {
        preptr = ptr;
        ptr = ptr-> next;
    }

    preptr->next = newnode;
    newnode->next = ptr;
    return start;

};
