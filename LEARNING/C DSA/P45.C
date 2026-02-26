#include <stdio.h>

#define MAX 10

int arr[MAX];
int top1 = -1;
int top2 = MAX;

void push1(int data);
void push2(int data);
int pop1();
int pop2();
void display1();
void display2();

int main()
{
    push1(10);
    push1(20);
    push1(30);

    push2(100);
    push2(200);
    push2(300);

    display1();
    display2();

    printf("Popped from Stack1: %d\n", pop1());
    printf("Popped from Stack2: %d\n", pop2());

    display1();
    display2();

    return 0;
}


void push1(int data)
{
    if(top1 + 1 == top2)
    {
        printf("Overflow! No space left.\n");
        return;
    }

    arr[++top1] = data;
}

void push2(int data)
{
    if(top1 + 1 == top2)
    {
        printf("Overflow! No space left.\n");
        return;
    }

    arr[--top2] = data;
}

int pop1()
{
    if(top1 == -1)
    {
        printf("Stack1 Underflow\n");
        return -1;
    }

    return arr[top1--];
}

int pop2()
{
    if(top2 == MAX)
    {
        printf("Stack2 Underflow\n");
        return -1;
    }

    return arr[top2++];
}


void display1()
{
    if(top1 == -1)
    {
        printf("Stack1 is Empty\n");
        return;
    }

    printf("Stack1: ");
    for(int i = top1; i >= 0; i--)
        printf("%d ", arr[i]);
    printf("\n");
}

void display2()
{
    if(top2 == MAX)
    {
        printf("Stack2 is Empty\n");
        return;
    }

    printf("Stack2: ");
    for(int i = top2; i < MAX; i++)
        printf("%d ", arr[i]);
    printf("\n");
}