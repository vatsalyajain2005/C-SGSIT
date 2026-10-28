#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *temp, *newNode;
    int n, i, value, maximum, minimum;

    printf("How many elements? ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("List must contain at least one element.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &value);
        newNode = (struct Node *)malloc(sizeof(struct Node));
        if (newNode == NULL) {
            printf("Memory overflow!\n");
            return 1;
        }
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    maximum = minimum = head->data;
    temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        if (temp->data > maximum) maximum = temp->data;
        if (temp->data < minimum) minimum = temp->data;
        temp = temp->next;
    }
    printf("\nMaximum = %d\nMinimum = %d\n", maximum, minimum);
    
    return 0;
}
