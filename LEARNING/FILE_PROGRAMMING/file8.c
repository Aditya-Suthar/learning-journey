#include <stdio.h>

int main()

{
    FILE *fp1,*fp2;
    int ch;

    fp1 = fopen("try1.txt","r");
    fp2 = fopen("try2.txt","w");

    if(fp1 == NULL)
    {
        printf ("FILE NOT FOUND");
        return 0;
    }

    if(fp2 == NULL)
    {
        printf ("FILE NOT CREATED");
        return 0;
    }

    while ((ch = fgetc(fp1))!= EOF)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }

        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }

    fputc(ch,fp2);
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}