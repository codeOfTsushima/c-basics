#include <stdio.h>

int main() {
    int number = 50;     
    int *p_number;       

    p_number = &number;  

    printf("Value of 'number': %d\n", number);
    printf("Address of 'number': %p\n", &number);
    printf("Value of pointer 'p_number': %p\n", p_number);

    // Use the dereference operator (*) to get the value at the address
    printf("Value pointed to by 'p_number': %d\n", *p_number);

    // We can also change the original variable's value through the pointer
    *p_number = 100;
    printf("New value of 'number' after changing via pointer: %d\n", number);

    return 0;
}