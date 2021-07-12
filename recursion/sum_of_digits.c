/* sum of digits of number */

#include<stdio.h>

int sumOfDigits(int);

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("%d\n",sumOfDigits(num));
}

int sumOfDigits(int n){
    if(n<10) return n;
    return (n%10)+sumOfDigits(n/10);
}