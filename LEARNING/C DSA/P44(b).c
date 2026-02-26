#include <stdio.h>

#define MAX 15
#define N 3
#define SIZE (MAX/N)

int arr[MAX];
int front[N], rear[N];

void insert(int qno, int data);
int deleteQ(int qno);
void display(int qno);

int main()
{
    int choice, qno, data;

    for(int i = 0; i < N; i++)
    {
        front[i] = -1;
        rear[i] = -1;
    }

    while(1)
    {
        printf("\n------ MENU ------\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Queue Number (0 to %d): ", N-1);
                scanf("%d", &qno);
                printf("Enter data: ");
                scanf("%d", &data);
                insert(qno, data);
                break;

            case 2:
                printf("Enter Queue Number (0 to %d): ", N-1);
                scanf("%d", &qno);
                printf("Deleted: %d\n", deleteQ(qno));
                break;

            case 3:
                printf("Enter Queue Number (0 to %d): ", N-1);
                scanf("%d", &qno);
                display(qno);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}

void insert(int qno, int data)
{
    if(qno < 0 || qno >= N)
    {
        printf("Invalid Queue Number\n");
        return;
    }

    if(rear[qno] == SIZE - 1)
    {
        printf("Overflow in Queue %d\n", qno);
        return;
    }

    if(front[qno] == -1)
        front[qno] = 0;

    rear[qno]++;
    arr[qno * SIZE + rear[qno]] = data;
}

int deleteQ(int qno)
{
    if(qno < 0 || qno >= N)
    {
        printf("Invalid Queue Number\n");
        return -1;
    }

    if(front[qno] == -1 || front[qno] > rear[qno])
    {
        printf("Underflow in Queue %d\n", qno);
        return -1;
    }

    return arr[qno * SIZE + front[qno]++];
}

void display(int qno)
{
    if(qno < 0 || qno >= N)
    {
        printf("Invalid Queue Number\n");
        return;
    }

    if(front[qno] == -1 || front[qno] > rear[qno])
    {
        printf("Queue %d is Empty\n", qno);
        return;
    }

    printf("Queue %d elements: ", qno);

    for(int i = front[qno]; i <= rear[qno]; i++)
    {
        printf("%d ", arr[qno * SIZE + i]);
    }

    printf("\n");
}