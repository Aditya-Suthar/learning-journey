#include <string.h>
#include <stdio.h>

void swap (char *x, char *y)
{
    char temp = *x;
    *x = *y ;
    *y = temp;
}

void permute (char str[], int l, int r)
{
    if (l == r)
    {
        printf ("%s \n",str);
        return;
    }

    for (int i = l;i <=r ;i++)
    {
        swap (&str[l] ,&str[i]); //choose
        permute (str, l+1 ,r);   //explore
        swap (&str[l], &str[i]); //backtrack
    }
}

int main ()

{
    char str[] = "abc";
    int n = strlen(str);

    permute (str,0,n-1);

    return 0;
}

