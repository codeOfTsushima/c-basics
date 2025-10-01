#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s1;

    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter age: ");
    scanf("%d", &s1.age);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("\nStudent Info:\n");
    printf("Name: %s\nAge: %d\nMarks: %.2f\n", s1.name, s1.age, s1.marks);
    return 0;
}
