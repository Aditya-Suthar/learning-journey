#include <stdio.h>

#define MAX 15
#define N 3
#define SIZE (MAX/N)

int arr[MAX];
int front[N], rear[N];

void insertQ1(int data);
void insertQ2(int data);
void insertQ3(int data);

int deleteQ1();
int deleteQ2();
int deleteQ3();


int main()
{
    for(int i = 0; i < N; i++)
        front[i] = rear[i] = -1;

    insertQ1(10);
    insertQ1(20);
    insertQ2(100);
    insertQ2(200);
    insertQ3(1000);

    printf("Q1 deleted element: %d\n", deleteQ1());
    printf("Q2 deleted element: %d\n", deleteQ2());
    printf(" Q3 deleted element: %d\n", deleteQ3());

    return 0;
}


void insertQ1(int data)
{
    if(rear[0] == SIZE - 1)
    {
        printf("Overflow in Q1\n");
        return;
    }

    if(front[0] == -1)
        front[0] = 0;

    rear[0]++;
    arr[rear[0]] = data;
}

void insertQ2(int data)
{
    if(rear[1] == SIZE - 1)
    {
        printf("Overflow in Q2\n");
        return;
    }

    if(front[1] == -1)
        front[1] = 0;

    rear[1]++;
    arr[SIZE + rear[1]] = data;
}

void insertQ3(int data)
{
    if(rear[2] == SIZE - 1)
    {
        printf("Overflow in Q3\n");
        return;
    }

    if(front[2] == -1)
        front[2] = 0;

    rear[2]++;
    arr[2 * SIZE + rear[2]] = data;
}


int deleteQ1()
{
    if(front[0] == -1 || front[0] > rear[0])
    {
        printf("Underflow in Q1\n");
        return -1;
    }

    return arr[front[0]++];
}

int deleteQ2()
{
    if(front[1] == -1 || front[1] > rear[1])
    {
        printf("Underflow in Q2\n");
        return -1;
    }

    return arr[SIZE + front[1]++];
}

int deleteQ3()
{
    if(front[2] == -1 || front[2] > rear[2])
    {
        printf("Underflow in Q3\n");
        return -1;
    }

    return arr[2 * SIZE + front[2]++];
}