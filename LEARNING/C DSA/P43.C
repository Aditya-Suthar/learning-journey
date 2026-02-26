#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int data);
int dequeue();
void display();

int main()
{
    enqueue(10); 
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    printf("\nDeleted: %d", dequeue());
    printf("\nDeleted: %d", dequeue());

    enqueue(60);
    enqueue(70);

    display();

    return 0;
}

void enqueue(int data)
{
    if ((rear + 1) % MAX == front)
    {
        printf("\nQueue Overflow");
        return;
    }

    if (front == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear + 1) % MAX;
    }

    queue[rear] = data;
}

int dequeue()
{
    if (front == -1)
    {
        printf("\nQueue Underflow");
        return -1;
    }

    int value = queue[front];

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }

    return value;
}

void display()
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return;
    }

    printf("\nQueue elements: ");

    int i = front;

    while (1)
    {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % MAX;
    }
}