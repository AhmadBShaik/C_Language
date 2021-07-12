/* factors of number */

#include<stdio.h>

int naturalNums(int,int);
int factors(int);


int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    factors(num);
}

int factors(int n){
    naturalNums(1,n);
}

int naturalNums(int s,int e){
    if(e%s==0){
        printf("%d ",s);
    }
    if(s==e){
        printf("\n");
        return 0;       
    }
    return naturalNums(s+1,e);

}