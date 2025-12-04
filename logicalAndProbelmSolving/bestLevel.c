#include <stdio.h>
int main(){
        int level1,level2,level3;
        scanf("%d%d%d",&level1,&level2,&level3);
        if(level1>level2&&level1>level3){
            printf("%d",level1);
        }
        else{
            if(level2>level1&&level2>level3){
                printf("%d",level2);
            }else{
                  printf("%d",level3);
            }
        }       
    }       