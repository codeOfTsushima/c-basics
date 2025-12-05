
#include <stdio.h>
int main(){
    float amount,gst;
    char code;
    scanf("%c",&code);
    scanf("%f",&amount);
    switch(code){
    case 'A':
        printf("%.2f",amount);
        break;
    case 'B':
        gst=amount*0.02;
        amount -=gst;
        printf("%.2f",amount);
        break;
    case 'C':
        gst=amount*0.05;
        amount -=gst;
        printf("%.2f",amount);
        break;
    case 'D':
        gst=amount*0.12;
        amount -=gst;
        printf("%.2f",amount);
        break;
    case 'E':
        gst=amount*0.18;
        amount -=gst;
        printf("%.2f",amount);
        break;
   case 'F':
        gst=amount*0.28;
        amount -=gst;
        printf("%.2f",amount);
        break;
    default:
        printf("Invalid choice");
 
        
    }
    return 0;

}
