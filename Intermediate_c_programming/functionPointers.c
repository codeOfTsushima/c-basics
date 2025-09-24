//It comes handy when you do functions in functions

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int foo (int x, int y) // function pointer
{
    return x+y;
}
int main(void){ 
        int xs[]= {1,2,3,4,5,6,7,8,9,10};
    
        int (*f)(int, int) = foo; 
        printf("%d \n",f(3,4)); 

    }