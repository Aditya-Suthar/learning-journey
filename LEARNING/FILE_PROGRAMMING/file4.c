#include <stdio.h>

int main ()

{
    FILE *fp;
    int n=0,num;
    float sum=0,avg;

    fp = fopen("ta.txt","r");

    if (fp == NULL)
    {
        printf ("FILE NOT FOUND");
        return 0;
    }

    while (fscanf(fp,"%d",&num)!= EOF)
    {
        sum = sum + num;
        ++n;
    }

    avg = sum/n;

    printf ("%.2f",avg);
    fclose(fp);
    return 0;
}