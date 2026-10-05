#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push operation
void push() {
    int value;

    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push more elements.\n");
    } else {
        printf("Enter element to push: ");
        scanf("%d", &value);

        top++;
        stack[top] = value;

        printf("%d pushed into the stack.\n", value);
    }
}

// Pop operation
void pop() {
    if (top == -1) {
        printf("Stack Underflow! Stack is empty.\n");
    } else {
        printf("%d popped from the stack.\n", stack[top]);
        top--;
    }
}

// Peek operation
void peek() {
    if (top == -1) {
        printf("Stack Underflow! Stack is empty.\n");
    } else {
        printf("Top element is: %d\n", stack[top]);
    }
}

// Display all elements
void display() {
    int i;

    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Elements in the stack are:\n");

        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

// Count number of elements
void count() {
    printf("Number of elements in stack: %d\n", top + 1);
}

int main() {
    int choice;

    while (choice != 6) {
        printf("\n===== STACK MENU =====\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Count Elements\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                count();
                break;

            case 6:
                printf("Program terminated.\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}