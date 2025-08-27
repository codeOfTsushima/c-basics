//pointer is basically a type of data that we can use inside of the program
#include <stdio.h>
int main()
{
    int age = 30;
    int * pAge = &age;// here the pointer variable pAge is storing the memory address of the age variable
    double gpa =2.13;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;
    printf("age's memory address is %p \n", &age); // here &age is the pointer/memory address of the variable age
    return 0;//to print out the pointer use %p

}