#include <stdio.h>
#include <stdlib.h>

// 1- We have to first declare a function
void greet(char[20]);
int sum(int);
int difference(int *);

int main()
{
    char text[20] = "Hello World!";
    int number = 15;

    // 3- We have to call our function
    greet(text);
    printf("%s\n", text);

    printf("SUM:\n");
    printf("%d\n", sum(number));
    printf("%d\n", number);

    printf("DIFFERENCE:\n");
    printf("%d\n", difference(&number));
    printf("%d\n", number);

    return 0;
}

// 2- After declaring, we have to initialize our function
void greet(char message[10])
{
    printf("%s\n", message);
    message[0] = 'T';
    printf("%s\n", message);
}

int sum(int num)
{
    printf("%d\n", num);
    num = 10;
    printf("%d\n", num);

    return num + 10;
}

int difference(int *num)
{
    printf("%d\n", *num);
    *num = 10;
    printf("%d\n", *num);

    return num - 10;
}
