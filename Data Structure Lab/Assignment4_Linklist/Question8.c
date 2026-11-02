#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
struct Node *last = NULL;

void insertEnd() {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory overflow!\\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d", &newNode->data);

    if (last == NULL) {
        last = newNode;
        newNode->next = newNode;
    } else {
        newNode->next = last->next;
        last->next = newNode;
        last = newNode;
    }
    printf("Node inserted.\\n");
}

void deleteEnd() {
    if (last == NULL) {
        printf("List is empty (underflow).\\n");
        return;
    }
    if (last->next == last) {
        printf("Deleted value: %d\\n", last->data);
        free(last);
        last = NULL;
        return;
    }
    struct Node *temp = last->next;
    while (temp->next != last)
        temp = temp->next;
    printf("Deleted value: %d\\n", last->data);
    temp->next = last->next;
    free(last);
    last = temp;
}

void display() {
    if (last == NULL) {
        printf("List is empty.\\n");
        return;
    }
    struct Node *temp = last->next;
    printf("List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != last->next);
    printf("(back to start)\\n");
}

int main() {
    int choice;
    do {
        printf("\\n1.Insert at end  2.Delete from end  3.Display  4.Exit\\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: insertEnd(); break;
            case 2: deleteEnd(); break;
            case 3: display(); break;
            case 4: break;
            default: printf("Invalid choice.\\n");
        }
    } while (choice != 4);
    return 0;
}