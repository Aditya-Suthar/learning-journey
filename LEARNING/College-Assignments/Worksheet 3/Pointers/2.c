#include <stdio.h>
#include <stdlib.h>

int main()

{
    int n;

    printf ("Enter the value of n");
    scanf ("%d",&n);


    int *p;

    p = (int*)malloc(n*sizeof(int));

    int i=0;
    while (i<n)
    {
        printf ("Enter the value of p[%d]",i);
        scanf ("%d",(p+i));
        i++;
    }

    int max = p[0];

    int j=1;

    while (j<n)
    {
        if (*(p+j) > max)
        {
            max = *(p+j);
        }

        j++;
    }
    
    printf ("%d",max);
    return 0;
}