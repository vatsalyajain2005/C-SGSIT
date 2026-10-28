#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
struct Node *top = NULL;

void push() {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Stack overflow!\\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d", &newNode->data);
    newNode->next = top;
    top = newNode;
    printf("Pushed.\\n");
}

void pop() {
    if (top == NULL) {
        printf("Stack underflow!\\n");
        return;
    }
    struct Node *temp = top;
    printf("Popped value: %d\\n", temp->data);
    top = top->next;
    free(temp);
}

void traverse() {
    struct Node *temp = top;
    if (temp == NULL) {
        printf("Stack is empty.\\n");
        return;
    }
    printf("Top -> ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\\n");
}

void count() {
    int total = 0;
    struct Node *temp = top;
    while (temp != NULL) { 
        total++;
        temp = temp->next;
    }
    printf("Number of elements: %d\\n", total);
}

int main() {
    int choice;
    do {
        printf("\\n1.Push  2.Pop  3.Traverse  4.Count  5.Exit\\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: traverse(); break;
            case 4: count(); break;
            case 5: break;
            default: printf("Invalid choice.\\n");
        }
    } while (choice != 5);
    return 0;
}
