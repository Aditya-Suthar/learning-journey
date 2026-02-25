#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue (int data);
int dequeue();
void display();

int main ()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();
    return 0;
}

void enqueue (int data)
{
    if (rear == MAX-1)
    {
        printf("\n Queue Overflow");
        return ;
    }

    if (front == -1)
    {
        front = 0;
    }

    rear = rear+1;
    queue[rear] = data;
}

int dequeue ()

{
    if (front == -1 || front > rear)
    {
        printf("Queue underflow");
        return -1;
    }

    int value = queue[front];
    front++;

    return value;
}   

void display()
{
    if (front == -1 || front > rear)
    {
        printf ("Queue is Empty");
        return ;
    }

    printf ("\n Queue elements:");

    for (int i= front; i <= rear; i++)
    {
        printf ("%d\t",queue[i]);
    }

}
