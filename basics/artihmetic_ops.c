#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int sum = 9 + 10;
    int difference = 9 - 10;
    float division = 9 / 10;
    float multiplication = 9 * 10;
    int remainder = 9 % 10;
    int power = pow(9, 10);
    // Requires math.h lib
    int sqRoot = sqrt(16);

    int ceiled = ceil(36.53242);
    int floored = floor(36.53242);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Division: %f\n", division);
    printf("Multiplication: %f\n", multiplication);
    printf("Remainder: %d\n", remainder);
    printf("Power: %d\n", power);
    printf("Square Root: %d\n", sqRoot);
    printf("Ceiled: %d\n", ceiled);
    printf("Floored: %d\n", floored);

    return 0;
}