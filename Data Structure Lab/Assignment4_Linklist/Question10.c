#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};
struct Node *head = NULL;

void insertEnd() {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory overflow!\\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
    } else {
        struct Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }
    printf("Node inserted.\\n");
}

void deleteEnd() {
    if (head == NULL) {
        printf("List is empty (underflow).\\n");
        return;
    }
    struct Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    printf("Deleted value: %d\\n", temp->data);
    if (temp->prev == NULL)
        head = NULL;
    else
        temp->prev->next = NULL;
    free(temp);
}

void forwardDisplay() {
    struct Node *temp = head;
    if (temp == NULL) {
        printf("List is empty.\\n");
        return;
    }
    printf("Forward: ");
    while (temp->next != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("%d\\n", temp->data);
}

void backwardDisplay() {
    struct Node *temp = head;
    if (temp == NULL) {
        printf("List is empty.\\n");
        return;
    }
    while (temp->next != NULL)
        temp = temp->next;
    printf("Backward: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\\n");
}

int main() {
    int choice;
    do {
        printf("\\n1.Insert at end  2.Delete from end  3.Forward display  4.Backward display  5.Exit\\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: insertEnd(); break;
            case 2: deleteEnd(); break;
            case 3: forwardDisplay(); break;
            case 4: backwardDisplay(); break;
            case 5: break;
            default: printf("Invalid choice.\\n");
        }
    } while (choice != 5);
    return 0;
}
