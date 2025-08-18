#include <stdio.h>

int main() {
    double gpa;
    int age;
    char grade;
    char name[20];
    /* float/double: for decimals, int for integers,
     char for a single charecter, char[] for string of charecters. specify the number of charecter you are going to use*/
    

    // first input/output
    printf("Enter your GPA");
    scanf("%lf", &gpa);
    printf("Your GPA is %.2f\n", gpa);
    //%.2f is used to print only two digits after decimal point

    // second input/output
    printf("Enter your age");
    scanf("%d", &age);
    printf("You are %d years old\n", age);

    // third input/output
    printf("Enter your grade");
    scanf(" %c", &grade);
    printf("Your grade is %c\n", grade);

    // fourth input/output
    printf("Enter your name\n");
    getchar(); //used as a dummy 
    fgets( name, 20, stdin);
/*fegts can read spaces unlike scanf and avoid
 buffer overflow by limiting the maximum number of charecters*/
    printf("Your name is %s", name);
    //%s is used to denote string of charecter
    return 0;
}
/*Short notes
-scanf: userinput function
-fgets: also a userinput function but reads spaces unlike scanf
-double/float: decimals
-int: integers
-char: single charecter
-char[?]: string of charecter
define the number of cg=harecter you are going to
use inside the breackets[]
-%n.f: n number of digits after decimal point
-%lf: Tells teh scanf function that we are looking for a double
-%d: integer
-%c: single charecter
%s: string of charecter*/