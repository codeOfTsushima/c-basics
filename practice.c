
#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {

    int x = 32;
    int y = 54;
    int result = 0;
    
    printf("Add %d and %d and get %d \n", x, y, add(x, y));
    
    printf("Result: %d \n", result);
    result = add(100, 100);
    printf("Result: %d \n", result);
    
    result *= sub(y, x);
    printf("Result: %d \n", result);

    result = multiply(2, 5);
    printf("Result: %d \n", result);

    result += divide(10, 2);
    printf("Result: %d \n", result);




    return 0;
}

// Add
int add(int a, int b) {
    return (a + b);
}

// Subtract 
int sub(int a, int b) {
    return (a - b);
}

// multiply
int multiply(int a, int b){
    return (a * b);
}

// Divide
int divide(int a, int b){
    return (a / b);
}