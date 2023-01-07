#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10];

    char section;

    int age;

    float cgpa;

    printf("Enter name: ");

    // Add '&' infornt of variable name except for string
    scanf("%s", name);

    printf("Enter section: ");

    // Leave a space before %c else the scanf for taking character as input would be skipped.
    scanf(" %c", &section);

    printf("Enter age: ");

    // Add '&' infornt of variable name except string
    scanf("%d", &age);

    printf("Enter CGPA: ");

    // Add '&' infornt of variable name except string
    scanf("%f", &cgpa);

    printf("Name: %s\nSection: %c\nAge: %d\nCGPA: %.2f\n", name, section, age, cgpa);

    return 0;
}