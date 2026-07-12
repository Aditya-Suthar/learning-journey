// creating stack for palindrome checking

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push (char ch)
{
    if (top == MAX-1)
    {
        printf("STACK OVERFLOW\n");
        return;
    }

    stack[++top] = ch;
    return;
}

char pop()
{
    if (top == -1)
    {
        printf("STACK UNDERFLOW\n");
        return;
    }

    return stack[top--];
}

int main ()

{
    int i,n;
    char str[MAX];

    printf("Enter the string");
    scanf("%s",str);

    int len = strlen(str);

    for (int i=0;i<n/2;i++)
    {
        push(str[i]);
    }

    

}
