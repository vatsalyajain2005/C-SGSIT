#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev, *next;
};

void insertEnd(struct Node **head, struct Node **tail, int value)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = tail;
    newNode->next = NULL;

    if (*head == NULL)
        *head = newNode;
    else
        (*tail)->next = newNode;

    *tail = newNode;
}

int main()
{
    struct Node *head = NULL, *tail = NULL;
    struct Node *newNode, *temp, *del;
    int n, x, i, value;

    printf("Number of nodes in the list: ");
    scanf("%d", &n);

    printf("Insert values in the list: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &value);
        insertEnd(&head, &tail, value);
    }

    printf("Element to search and delete X: ");
    scanf("%d", &x);

    temp = head;
    while(temp != NULL)
    {
        if(temp->data == x)
        {
            del = temp;

            if(temp->prev != NULL)
                temp->prev->next = temp->next;
            else
                head = temp->next;

            if(temp->next != NULL)
                temp->next->prev = temp->prev;
            else
                tail = temp->prev;

            temp = temp->next;
            free(del);
        }
        else
            temp = temp->next;
    }

    printf("Output: ");
    temp = head;
    while(temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }

    return 0;
}