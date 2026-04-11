#include <stdio.h>

int main ()

{
    FILE *fp;
    char ch;

    fp = fopen("data.txt","w");

    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        fputc(ch,fp);
    }

    fclose(fp);

    return 0;
}