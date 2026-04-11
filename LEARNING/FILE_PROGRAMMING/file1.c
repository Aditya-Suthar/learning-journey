#include <stdio.h>

int main ()
{
    FILE *fp;
    int ch;

    fp = fopen("data.txt","r");
    
    if (fp == NULL)
    {
        printf ("FILE NOT FOUND");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c",ch);
    }

    fclose(fp);

    return 0;    
}