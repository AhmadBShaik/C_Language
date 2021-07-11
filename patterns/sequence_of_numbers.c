/* sequence of numbers seperated by comma */

#include<stdio.h>

int main(){
    int limit;
    printf("Enter limit : ");
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++){
        printf("%d",i);
        if(i<limit){
            printf(",");
        }
    }
    printf("\n");
    return 0;
}