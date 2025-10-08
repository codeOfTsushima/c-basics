#include <stdio.h>
int main()
{
    int r,cp,sl;
    scanf("%d %d",&r,&cp);
    switch(r){
        case 1:
        sl=25;
        if(cp<sl){
            printf("Below");
        }
        else if(cp>sl){
            printf("Above");
            
        }
        else{
            printf("Normal");
        }
        break;
    
    case 2:
    sl=35;
    if(cp<sl){
        printf("Below");
    }
    else if(cp>sl){
       printf("Above");
    }
    else{
        printf("Normal");
    }
    break;
   
    case 3:
    sl =55;
    if (cp<sl){
        printf("Below");
        
    }
    else if(cp>sl){
        printf("Above");
    }
    else{
        printf("Normal");
    }
    break;
   }
}


