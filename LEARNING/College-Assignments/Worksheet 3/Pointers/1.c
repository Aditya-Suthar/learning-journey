#include <stdio.h>


int inp_n();
void inp_arr(int n);

int main ()

{
    int n = inp_n();

    int arr[n];

    inp_arr(n);

    int *p;
    p = arr;

    int i=0;
    int sum = 0;

    while (i<n)
    {
        sum = sum + *(p+i);
        i++;
    }

    return 0;

}

int inp_n()
{
    int n;

    printf ("Enter the value of n :-");
    scanf ("%d",&n);

    return n;
}