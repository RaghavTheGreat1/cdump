#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 5

void enqueue();
void dequeue();
void display();

int queue[QUEUE_SIZE];

// initial front end of the queue
int front = 0;

// initial rear end of the queue
int rear = -1;

int main()
{
    printf("Welcome to Ordinary Queues\n");
    printf("1. Push \t 2. Pop\n3. Display \t 4. Exit\n");

    int option;
    int done = 0;

    while (!done)
    {
        printf("Enter the option: ");

        scanf("%d", &option);

        switch (option)
        {
        case 1:
            // TODO: Implement push
            enqueue();
            break;
        case 2:
            // TODO: Implement pop
            dequeue();
            break;
        case 3:
            // TODO: Implement display
            display();
            break;
        case 4:
            done = !done;
            break;
        default:
            printf("Option selected is incorrect\n");
            break;
        }
    }
}

// Function to enqueue the queue
void enqueue()
{
    if (rear == QUEUE_SIZE - 1)
    {
        printf("No item can be inserted since the Queue is full.\n");
        return;
    }
    int item;
    printf("Enter the element to be inserted: ");
    scanf("%d", &item);

    queue[++rear] = item;
}

// Function to dequeue the queue
void dequeue()
{
    if (front > rear)
    {
        printf("No item can be deleted since the Queue is empty\n");
        return;
    }

    int item = queue[front++];

    printf("Item deleted: %d\n", item);
}

// Function to enqueue the queue
void display()
{
    if (front > rear)
    {
        printf("Queue is empty\n");
        return;
    }

    for (int i = front; i <= rear; i++)
    {
        printf("%d \t", queue[i]);
    }
    printf("\n");
}
