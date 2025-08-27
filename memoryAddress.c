#include <stdio.h>
int main()
{
    int age = 30;
    double gpa= 3.112;
    char grade = 'A';

    printf("Age: %p\ngpa:%p\ngrade %p ", &age,&gpa,&grade);// to point out specific memory address we use %p, which stands for pointer
    return 0;
}