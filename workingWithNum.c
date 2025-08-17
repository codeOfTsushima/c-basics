#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
    int num = 12;
    int numb = 2;
    float numbe = 24.64;
/*Do not forget to set decimal number as float while using variable because i was so confused! 
ps: I am a begginer  */

    printf("%d raised to %d is %f \n", num, numb, pow (num,numb));
//Pow function is used to find the power of the numbers
    printf("square root of %d is %f \n", num, sqrt(num));
//Sqrt is used to find square root of the number
    printf("rounded up the number %f to %f\n", numbe, ceil(numbe));
//Ceil is used to round "up" the number
    printf("rounded down the number %f to %f \n", numbe, floor(numbe));
//Floor is used to round "down" the number
    printf("rounded the number %f to the nearest integer which is %f \n", numbe, round(numbe));
//Round is used to round to the "nearest" number
    return 0;
}