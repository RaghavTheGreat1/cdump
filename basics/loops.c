#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i = 5;
    while (i > 0)
    {
        printf("%d\t", i);
        i = i - 1;
    }
    printf("\n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d\t", j);
    }
    printf("\n");

    int amounts[6] = {10, 15, 16, 37, 50};

    for (int j = 0; j < 5; j++)
    {
        printf("%d\t", amounts[j]);
    }
    return 0;
}