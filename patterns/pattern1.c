/* pattern 1 */

#include<stdio.h>

int main(){
    int limit;
    printf("Enter limit : ");
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++){
        for(int j=1 ; j<=i;j++){
            if(i%2 == 1)
                printf("* ");
            else
                printf("# ");
        }
    printf("\n");
    }
    return 0;
}