#include <stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    if(marks>=80&&marks<=100){
        printf("Distinction");
    
    }
    else if(marks>=60&&marks<=79){
        printf("First class");
    }
    else if(marks>=35&&marks<=59){
        printf("Second class");
    }
    else{
        printf("Fail");
    }
}