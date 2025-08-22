#include <stdio.h>
int max(int num1, int num2, int num3){
    int result;
    if (num1>=num2 && num1 >= num3){//%%Is a logical operator and it's function is to add another condition in here
        result = num1;
    }    else {
            result = num2;
        }
    return result;
    }

int main()
{
    printf("%d", max(4,10));
}