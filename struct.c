#include <stdio.h>
#include <string.h>  // needed for strcpy

struct Student {
    char name[50];
    char course[50];
    int age;
    double gpa;
};

int main() {
    struct Student student1;

    student1.age = 22;
    student1.gpa = 3.9;

    strcpy(student1.name, "Parthip");
    strcpy(student1.course, "CSE-AIML");

    printf("Name: %s\n", student1.name);
    printf("Course: %s\n", student1.course);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2lf\n", student1.gpa);

    return 0;
}
