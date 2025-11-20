#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int evenSum=0;
    int oddSum=0;
    for(int i=a;i<=b;i++){
        if(i%2==0){
            evenSum=evenSum+i;
            
    }else{
        oddSum = oddSum+i;
        
        }
    } 
    printf("Even sum: %d \n",evenSum);
    printf("Odd sum: %d",oddSum);
}