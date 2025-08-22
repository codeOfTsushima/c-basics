#include <stdio.h>
//To retun the value define the function above main
double cube(double num){
// double result = num*num*num;(We could do this or directly return the value)
    return num*num*num;
}
int main()
{
    printf("answer %.2f", cube(3.8));
    return 0;
}