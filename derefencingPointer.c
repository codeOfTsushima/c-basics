//dereferencing a pointer means going to a memory address of the pointer and grabbing a piece of information from there
#include <stdio.h>
int main()
{
    int age = 30;
    int * pAge = &age;
    printf("%d", *pAge);//to dereference a pointer use a *, and print out a number instead of a pointer so use %d instead of %p
}