#include <stdio.h>

int main()
{
    // Char - Stores single character & use single quotations marks.
    char grade = 'A';

    // String - Use double quotes for string.
    char name[] = "Raghav";

    int age;

    age = 50;

    double cgpa;

    cgpa = 8.8;

    printf("Age of %s: %d years & scores %c with %.2f CGPA\n", name, age, grade, cgpa);

    // s - string
    // d - int
    // c - char
    // f - float
    // lf - double

    const float PI = 3.14;
    printf("PI is %.2f\n", PI);

    // Always use double quotes inside print statement else throws an error.
    printf(" A");

    return 0;
}