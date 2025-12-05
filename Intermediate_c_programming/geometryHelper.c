// You are using GCC
#include <stdio.h>
int main(){
    char shape;
    scanf("%c",&shape);
    switch(shape){
        case 'R':{
            int l,b;
            scanf("%d%d",&l,&b);
            double rarea=l*b;
            printf("%.2f",rarea);
            break;
            
            
        }
        case 'C':{
            int r;
            scanf("%d",&r);
            double carea=3.14*r*r;
            printf("%.2f",carea);
            break;
            
        }
        case 'S':{
            int s;
            scanf("%d",&s);
            double sarea=s*s;
            printf("%.2f",sarea);
            break;
        }
     
    }
}
