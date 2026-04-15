#include <stdio.h>
#include <stdlib.h>

struct Book {
    int book_no;
    char title[50];
    char authors[50];
    int year;
    float cost;
};

void display(struct Book b) {
    printf("\nBook No: %d\n", b.book_no);
    printf("Title: %s", b.title);
    printf("Authors: %s", b.authors);
    printf("Year: %d\n", b.year);
    printf("Cost: %.2f\n", b.cost);
}

int main() {
    FILE *fp;
    struct Book b;
    int choice;

    fp = fopen("books.dat", "rb");
    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }

    while (1) {
        printf("\n1. Search by Book No");
        printf("\n2. Costliest Book + Previous Book");
        printf("\n3. Last Book + Count");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        rewind(fp); 

        
        if (choice == 1) {
            int key, found = 0;

            printf("Enter Book No: ");
            scanf("%d", &key);

            while (fread(&b, sizeof(b), 1, fp) == 1) {
                if (b.book_no == key) {
                    display(b);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found\n");
        }

        
        else if (choice == 2) {
            struct Book max;
            float maxCost = -1;
            int pos = 0, maxPos = 0;

            while (fread(&b, sizeof(b), 1, fp) == 1) {
                if (b.cost > maxCost) {
                    maxCost = b.cost;
                    max = b;
                    maxPos = pos;
                }
                pos++;
            }

            printf("\nCostliest Book:\n");
            display(max);

            
            fseek(fp, maxPos * sizeof(b), SEEK_SET);

            fread(&b, sizeof(b), 1, fp); 

            
            if (maxPos > 0) {
                fseek(fp, -2 * sizeof(b), SEEK_CUR);
                fread(&b, sizeof(b), 1, fp);

                printf("\nPrevious Book:\n");
                display(b);
            } else {
                printf("\nNo previous book (first record)\n");
            }
        }

       
        else if (choice == 3) {
            
            fseek(fp, -sizeof(b), SEEK_END);
            fread(&b, sizeof(b), 1, fp);

            printf("\nLast Book:\n");
            display(b);

            
            int count1 = b.book_no - 1000;
            printf("\nCount (method 1): %d\n", count1);

            
            fseek(fp, 0, SEEK_END);
            long size = ftell(fp);

            int count2 = size / sizeof(b);
            printf("Count (method 2): %d\n", count2);
        }

        else if (choice == 4) {
            break;
        }

        else {
            printf("Invalid choice\n");
        }
    }

    fclose(fp);
    return 0;
}