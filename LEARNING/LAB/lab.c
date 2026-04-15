#include <stdio.h>
#include <stdlib.h>

struct Book {
    int book_no;
    char title[50];
    char authors[50];
    int year;
    float cost;
};

int main() {
    FILE *fp;
    struct Book b;
    int n, i;

    fp = fopen("books.dat", "wb");
    if (fp == NULL) {
        printf("Error creating file\n");
        return 1;
    }

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        b.book_no = 1001 + i;

        printf("\nBook %d\n", i + 1);

        getchar(); // clear buffer

        printf("Enter title: ");
        fgets(b.title, sizeof(b.title), stdin);

        printf("Enter authors: ");
        fgets(b.authors, sizeof(b.authors), stdin);

        printf("Enter year: ");
        scanf("%d", &b.year);

        printf("Enter cost: ");
        scanf("%f", &b.cost);

        fwrite(&b, sizeof(b), 1, fp);
    }

    fclose(fp);
    printf("\nFile created successfully.\n");

    return 0;
}