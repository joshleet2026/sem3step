#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int x)
{
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = x;
    newnode->next = NULL;

    if(front == NULL)
    {
        front = newnode;
        rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }

    printf("Element %d pushed\n", x);
}

void dequeue()
{
    struct node *temp;
    int x;

    if(front == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    temp = front;
    x = front->data;

    front = front->next;

    if(front == NULL)
        rear = NULL;

    free(temp);

    printf("Element %d deleted\n", x);
}

void peek()
{
    if(front == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Front element: %d\n", front->data);
}

int main()
{
    struct node *temp;

    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("Queue: ");

    temp = front;

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");

    dequeue();

    printf("Queue: ");

    temp = front;

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");

    peek();

    return 0;
}