#include<stdio.h>
#include<stdlib.h>

void main(){
    int d;
    scanf("%d",&d);

    for(int y=(d*2)-1;y>=1;y--){
        for(int u=(d*2)-1;u>=1;u--){
            if(y==u && y!=(d*2)-1 && y!=1){
                printf("%d ",d-1);
            }
            else
                printf("%d ",d);
        }
        printf("\n");
        // printf("%d \n",(d*2)-y);
        
    }
}