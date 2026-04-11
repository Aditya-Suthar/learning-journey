#include <stdio.h>

int main ()

{
    FILE *fp;
    int n, num, i;
    float sum =0,avg;

    fp = fopen("da.txt","r");

    if (fp == NULL)
    {
        printf("FILE NOT FOUND");
        return 1;
    }

    fscanf (fp,"%d",&n);

    for (int i=0;i<n;i++)
    {
        fscanf(fp,"%d",&num);
        sum += num;
    }

    avg = sum/n;

    printf ("Average = %.2f",avg);

    fclose(fp);
    return 0;
}