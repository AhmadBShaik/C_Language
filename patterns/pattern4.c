/* pattern4 */

#include<stdio.h>

int main(){
    int limit;
    printf("Enter limit : ");
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++){
        for(int j=i;j<=limit;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}