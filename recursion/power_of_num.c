/* power of number */
#include<stdio.h>

int power(int,int);

int main(){
    int num,exp;
    printf("Enter number and power seperated by a space : ");
    scanf("%d%d",&num,&exp);

    printf("%d\n",power(num,exp));
    
}

int power(int n,int p){
    if(p==0) return 1;
    if(p==1) return n;
    return n*power(n,p-1);
}