#include <stdio.h>

struct Book
{
    int book_no;
    char title[50];
    float cost;
    int year;
};


int main()

{
    FILE *fp;
    struct Book b;
    int n,i;

    float total = 0,avg;

    printf("Enter number of books:-");
    scanf ("%d",&n);

    fp = fopen("nine.dat","wb");

    for (i=0 ;i<n; i++)
    {
        b.book_no = i+1 ;

        printf ("Enter title\n");
        scanf ("%[^\n]", b.title);

        printf ("Enter cost:-");
        scanf ("%f",&b.cost);

        printf ("Enter year:-");
        scanf ("%d", &b.year);

        fwrite(&b,sizeof(struct Book),1,fp);
    }

    fclose(fp);

    fp = fopen("books.dat","rb");

    printf ("\n---BOOK RECORDS---\n");

    while (fread(&b,sizeof(struct Book),1,fp) == 1)
    {
        printf("\nBook No: %d", b.book_no);

        printf("\nTitle: %s", b.title);

        printf("\nCost: %.2f", b.cost);

        printf("\nYear: %d\n", b.year);

        total += b.cost;
    }

    fclose(fp);

    avg = total/n;

    printf("\nAverage Cost = %.2f\n", avg);

    return 0;
}