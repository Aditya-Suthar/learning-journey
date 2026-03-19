#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;


struct Node* createNode(int data) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}


void insertAtPosition(int data, int pos) {
    struct Node* newnode = createNode(data);

    if (pos == 1) {
        newnode->next = head;
        head = newnode;
        return;
    }

    struct Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position\n");
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}


void deleteAtPosition(int pos) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;

    if (pos == 1) {
        head = temp->next;
        free(temp);
        return;
    }

    for (int i = 1; i < pos - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        printf("Invalid position\n");
        return;
    }

    struct Node* del = temp->next;
    temp->next = del->next;
    free(del);
}


void insertAfterElement(int key, int data) {
    struct Node* temp = head;

    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Element not found\n");
        return;
    }

    struct Node* newnode = createNode(data);
    newnode->next = temp->next;
    temp->next = newnode;
}


void deleteAfterElement(int key) {
    struct Node* temp = head;

    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Deletion not possible\n");
        return;
    }

    struct Node* del = temp->next;
    temp->next = del->next;
    free(del);
}


void traverse() {
    struct Node* temp = head;

    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


void search(int key) {
    struct Node* temp = head;
    int pos = 1;

    while (temp != NULL) {
        if (temp->data == key) {
            printf("Element found at position %d\n", pos);
            return;
        }
        temp = temp->next;
        pos++;
    }

    printf("Element not found\n");
}

int main() {
    int choice, data, pos, key;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Insert at position\n");
        printf("2. Delete at position\n");
        printf("3. Insert after element\n");
        printf("4. Delete after element\n");
        printf("5. Traverse\n");
        printf("6. Search\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data and position: ");
                scanf("%d %d", &data, &pos);
                insertAtPosition(data, pos);
                break;

            case 2:
                printf("Enter position: ");
                scanf("%d", &pos);
                deleteAtPosition(pos);
                break;

            case 3:
                printf("Enter element after which to insert: ");
                scanf("%d", &key);
                printf("Enter data: ");
                scanf("%d", &data);
                insertAfterElement(key, data);
                break;

            case 4:
                printf("Enter element after which to delete: ");
                scanf("%d", &key);
                deleteAfterElement(key);
                break;

            case 5:
                traverse();
                break;

            case 6:
                printf("Enter element to search: ");
                scanf("%d", &key);
                search(key);
                break;

            case 7:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
}