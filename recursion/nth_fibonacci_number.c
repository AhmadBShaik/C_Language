/* nth fibonacci number */
#include<stdio.h>

int fib(int);

int main(){
    int num;
    printf("Enter the value of n : ");
    scanf("%d",&num);
    if(num>0){
        printf("%d\n",fib(num));
    }else{
        printf("Invalid input value\n");
    }
}

int fib(int n){
    if (n==1) return 0;
    if (n==2) return 1;
    return fib(n-1)+fib(n-2);
}