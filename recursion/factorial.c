/* factorial of a given number */

#include<stdio.h>

int factorial(int);

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("%d\n",factorial(num));
}

int factorial(int n){
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}