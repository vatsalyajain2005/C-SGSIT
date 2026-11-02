#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertEnd() {
    struct Node *newNode = malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory overflow!\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    printf("Node inserted.\n");
}

void deleteEnd() {
    if (head == NULL) {
        printf("List is empty (underflow).\n");
        return;
    }
    if (head->next == NULL) {
        printf("Deleted value: %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }
    struct Node *temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;
    struct Node *last = temp->next;
    printf("Deleted value: %d\n", last->data);
    temp->next = NULL;
    free(last);
}

void display() {
    struct Node *temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}

void countNodes() {
    int count = 0;
    struct Node *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("Total nodes: %d\n", count);
}

int main() {
    int choice;
    do {

        printf("\n1.Insert at beginning");
        printf("\n2.Delete from beginning");
        printf("\n3.Display");
        printf("\n4.Count Nodes");
        printf("\n5.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: insertEnd(); break;
            case 2: deleteEnd(); break;
            case 3: display(); break;
            case 4: countNodes(); break;
            case 5: printf("Exit.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 5);
    return 0;
}
