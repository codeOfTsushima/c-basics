#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    long long fact=1;
    int sum=0;
    for(int i=1;i<=n;i++){
        fact =fact*i;
        sum=sum+fact;
    }
    printf("%lld",sum);
}