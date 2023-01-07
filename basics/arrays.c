#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amounts[6] = {10, 15, 16, 37, 50};
    amounts[5] = 100;
    // Accessing amounts array using index. Index start with 0 & ends at n-1, n is number of elements. [0,n-1].
    printf("%d\n", amounts[5]);

    int luckyNumbers[10];
    luckyNumbers[0] = 1;
    printf("%d\n", amounts[0]);

    return 0;
}
