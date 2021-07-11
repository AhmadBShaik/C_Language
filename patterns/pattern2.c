/* pattern2 */
#include<stdio.h>

int main(){
    int limit;
    printf("Enter limit : ");
    scanf("%d",&limit);
    for(int i=0;i<limit;i++){
        for(int j=0 ; j<=i;j++){
            int result = 65+j;
            printf("%c ",result);
        }
        printf("\n");
    }
    return 0;
}