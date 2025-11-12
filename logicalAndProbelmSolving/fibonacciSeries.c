#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    int sum =0;
    int a=0,b=1;
    for(int i=0;i<n;i++){
        printf("%d ",sum);
        a=b;
        b=sum;
        sum=a+b;
    }
}