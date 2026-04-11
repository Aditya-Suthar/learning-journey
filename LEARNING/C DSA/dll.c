struct node* create_node(int value)
{
    struct node* newnode;

    newnode = (struct node*)(malloc(sizeof(struct node)));

    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = NULL;

    return newnode;
}


struct node* delete_value(struct node *start,int value)
{
    struct node *ptr = start;

    if(start == NULL)
    {
        print("List is Empty\n");
        return start;
    }

    while(ptr!= NULL)
    {
        if(ptr->data = value)
        {
            //first node

            if(ptr->prev == NULL)
            {
                start = start->next;

                if (start != NULL)
                {
                    start->prev = NULL;
                }
            }

            else
            {
                ptr->
            }
        }
    }
}