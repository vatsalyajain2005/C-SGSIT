#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertEnd(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory overflow!\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
    } else {
        struct Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

int search(int key) {
    struct Node *temp = head;
    int position = 1;
    while (temp != NULL) {
        if (temp->data == key)
            return position;
        temp = temp->next;
        position++;
    }
    return -1;
}

void display() {
    struct Node *temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}

int main() {
    int n, value, key, i, position;
    printf("How many elements? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &value);
        insertEnd(value);
    }
    display();
    printf("Enter element to search: ");
    scanf("%d", &key);
    position = search(key);
    if (position == -1)
        printf("Element not found.\\n");
    else
        printf("Element found at position %d.\\n", position);
    return 0;
}
