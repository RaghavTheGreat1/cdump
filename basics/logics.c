#include <stdio.h>
#include <stdlib.h>

// 1- We have to first declare a function
void greet(char[20]);
int sum();

int main()
{
    int num = 3;

    if (num > 6)
    {
        printf("Greater");
    }
    else if (num == 6)
    {
        printf("Equal");
    }
    else
    {
        printf("Lesser");
    }
    printf("\n");
    switch (num)
    {
    case 2:
        printf("2");
        break;
    case 3:
        printf("3");
        break;
    default:
        printf("6");
    }
    return 0;
}
