#include <stdio.h>

int inp_n();
int rec_sum(int n);
int main ()


{
    int n = inp_n();

    printf ("The sum is:- %d", rec_sum(n));

    return 0;

}

int inp_n()
{
    int n;

    printf ("Enter the value of n:-");
    scanf ("%d",&n);

    return n;
}

int rec_sum(int n)
{
    if (n==0)
    {
        return 0;
    }

    return n + rec_sum(n-1);
}   


