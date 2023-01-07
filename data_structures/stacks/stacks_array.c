#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 5

int stack[STACK_SIZE];
int top = -1;

void push();
void pop();
void display();

int main()
{
    printf("Welcome to Stacks\n");
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
            push();
            break;
        case 2:
            // TODO: Implement pop
            pop();
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

void push()
{
    if (top == STACK_SIZE - 1)
    {
        printf("No item can be inserted since the Stack is full.\n");
        return;
    }
    int item;
    printf("Enter the element to be inserted: ");
    scanf("%d", &item);

    stack[++top] = item;
}

void pop()
{
    if (top == -1)
    {
        printf("No item can be deleted since the Stack is empty.\n");
        return;
    }
    int item = stack[top--];
    printf("Item deleted: %d\n", item);
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}