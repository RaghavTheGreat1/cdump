#include <stdio.h>
#include <stdlib.h>

int stackSize = 1;
int *stack;

int top = -1;

void push();
void pop();
void display();

int main()
{
    stack = (int *)malloc(stackSize * sizeof(int));

    printf("Welcome to DMA Stacks\n");
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
    if (top == stackSize - 1)
    {
        printf("Stack size is full, stack increase by 1.\n");
        stackSize++;
        stack = (int *)realloc(stack, stackSize * sizeof(int));
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
    stackSize--;
    stack = (int *)realloc(stack, stackSize * sizeof(int));
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