#include <stdio.h>

int main ()

{
    FILE *fp;
    char ch;

    fp = fopen("la.txt","r");

    if (fp == NULL)
    {
        printf ("FILE NOT FOUND");
        return 0;
    }

    int blank = 0;
    int digits = 0;
    int alpha = 0;
    int newline = 0;


    while (fscanf(fp,"%c",&ch) != EOF)
    {
        if (ch == '\n')
        {
            newline++;
        }
        
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        
        else if ((ch >='a' && ch <= 'z') || (ch>= 'A' && ch<= 'Z'))
        {
            alpha++;
        }

        else if (ch == ' ')
        {
            blank++;
        }
    }

    printf("Blanks = %d\n", blank);
    printf("Digits = %d\n", digits);
    printf("Alphabets = %d\n", alpha);
    printf("Newlines = %d\n", newline);

    fclose(fp);
    return 0;
}