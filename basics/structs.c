#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[10];
    int age;
    float cgpa;
};

int main()
{

    struct Student student = {"Raghav\n", 19, 8.8};

    printf("%s", student.name);

    // strcpy used to assign char array or string to a particular string;
    // Needs string.h lib
    strcpy(student.name, "Keshav");
    printf("%s", student.name);

    return 0;
}