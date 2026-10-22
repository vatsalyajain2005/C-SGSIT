#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertBeginning() {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory overflow!\\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d", &newNode->data);
    newNode->next = head;
    head = newNode;
    printf("Node inserted.\\n");
}

void deleteBeginning() {
    if (head == NULL) {
        printf("List is empty (underflow).\\n");
        return;
    }
    struct Node *temp = head;
    printf("Deleted value: %d\\n", temp->data);
    head = head->next;
    free(temp);
}

void display() {
    struct Node *temp = head;
    if (temp == NULL) {
        printf("List is empty.\\n");
        return;
    }
    printf("List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\\n");
}

int main() {
    int choice;
    do {
        printf("\\n1.Insert at beginning  2.Delete from beginning  3.Display  4.Exit\\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: insertBeginning(); break;
            case 2: deleteBeginning(); break;
            case 3: display(); break;
            case 4: printf("Exit.\\n"); break;
            default: printf("Invalid choice.\\n");
        }
    } while (choice != 4);
    return 0;
}

