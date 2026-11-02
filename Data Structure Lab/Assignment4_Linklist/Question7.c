#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
struct Node *front = NULL, *rear = NULL;

void enqueue() {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory overflow!\\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Element added.\\n");
}

void dequeue() {
    if (front == NULL) {
        printf("Queue underflow!\\n");
        return;
    }
    struct Node *temp = front;
    printf("Removed value: %d\\n", temp->data);
    front = front->next;
    if (front == NULL)
        rear = NULL;
    free(temp);
}

void traverse() {
    struct Node *temp = front;
    if (temp == NULL) {
        printf("Queue is empty.\\n");
        return;
    }
    printf("Front -> ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\\n");
}

void count() {
    int total = 0;
    struct Node *temp = front;
    while (temp != NULL) {
        total++;
        temp = temp->next;
    }
    printf("Number of elements: %d\\n", total);
}

int main() {
    int choice;
    do {
        printf("\\n1.Enqueue  2.Dequeue  3.Traverse  4.Count  5.Exit\\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: traverse(); break;
            case 4: count(); break;
            case 5: break;
            default: printf("Invalid choice.\\n");
        }
    } while (choice != 5);
    return 0;
}