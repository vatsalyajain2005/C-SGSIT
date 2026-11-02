

#include <stdio.h>

#define MAX 100

int front = -1, rear = -1;

void enqueue(int queue[], int value) {
    if (rear == MAX - 1) {
        printf("Queue overflow!\n");
        return;
    }

    if (front == -1) {
        front = 0;
    }

    queue[++rear] = value;
}

int main() {
    int queue[MAX];
    int n, k;

    printf("Enter number of elements in the queue: ");
    scanf("%d", &n);

    printf("Enter queue elements: ");

    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        enqueue(queue, value);
    }

    printf("Enter value of K: ");
    scanf("%d", &k);

    k = k % n;

    for (int i = 0; i < k; i++) {
        int temp = queue[front];

        for (int j = front; j < rear; j++) {
            queue[j] = queue[j + 1];
        }

        queue[rear] = temp;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", queue[i]);
    }

    return 0;
}
