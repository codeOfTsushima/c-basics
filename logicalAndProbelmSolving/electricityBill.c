#include <stdio.h>
int main(){
    int units;
    scanf("%d",&units);
    float bill;
    if(units<=100){
        bill=units*5;
        
    }
    else if(units>=101&&units<=200){
        bill=units*7;
    }
    else if(units>=201 && units<=300){
        bill=units*10;
    }
    else{
        bill=units*12;
    }
    if(bill>1500){
        bill=bill+(bill*0.10);
    }

    printf("%.2f",bill);
}