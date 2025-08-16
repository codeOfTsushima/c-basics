#include <stdio.h>
int main()
{
    char name[]= "Parthip";
    char new_name[]= "Kichu"; // use char "variable name" [] for assigning the char value
    int age = 18; // use int "variable name" for assigining the int value
    printf("My name is %s \n", name); // %s is to assign char variable/stings
    printf("I am %d years old \n", age); // %d is to assign numeric variable 
    printf("Haha fooled you, my name is not %s \n", name);
    //to assign variables you need to type %s/%d and after the coma type the variable name
    printf("it's actually %s \n", new_name );
    age = 15; // and also i can change the variable in the middle of the program just by assiging a diff element to the same variable name
    printf("and my age is %d", age);
    return 0;
} 