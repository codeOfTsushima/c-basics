//Array is basically a container to store a piece of information
#include <stdio.h>
int main()
{
//like if we type int,char,or double it would be an array holding intgers charecters and decimals
    int luckyNumber[] = {3, 5, 12, 433, 12}; // I could store n number of numbers in the curly brackets
    int luckynumber2[10];
    
//Need to tell c how many element that this array can hold in this case it's 10
// open and closed brackets used in int is for to denote we are goint to store a bunch of information
    luckyNumber[1] = 21;
// to modify the number inside the brackets use the above way
    luckynumber2[1] = 80;
    luckynumber2[2] = 40;    
    printf("%d \n", luckyNumber[3]);
    printf("%d \n", luckynumber2[1]);
    printf("%d \n", luckynumber2[2]);
// to access the numbers type the index value of the number
    return 0;
}
