//Function is a collection of code that does a specific task
#include <stdio.h>
void sayHi();

int main()
{
    printf("Upper\n");
    sayHi();
//for to print the void function we have to call it that is why the above code is written
    printf("lower\n");
    return 0;
}
void sayHi()
{
//void function tells to return nothing
    printf("Hello user\n");
}
/*When i run this program the code will print out upper first
then the sayhi function, which is in void and prints out that later comes back
again and prints the lower*/