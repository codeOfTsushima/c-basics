
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    switch(n){
    case 1:
    printf("The corresponding day is Sunday.");
    break;
    case 2:
    printf("The corresponding day is Monday.");
    break;
    case 3:
      printf("The corresponding day is Tuesday.");
    break;
    case 4:
      printf("The corresponding day is Wednesday.");
    break;
    case 5:
     printf("The corresponding day is Thursday.");
    break;
    case 6:
     printf("The corresponding day is Friday.");
    break;
    case 7:
     printf("The corresponding day is Saturday.");
    break;
    default:
    printf("Invalid input. Please enter a number between 1 and 7.");

    }
    return 0;
    
    
}