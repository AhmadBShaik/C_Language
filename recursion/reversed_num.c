/* reversing a number */

#include<stdio.h>

int reversedNumber(int);
int power(int,int);
int digitCount(int); 

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("reverse of %d is %d\n",num,reversedNumber(num));
}

int reversedNumber(int n){
    if(n<10) return n;
    return (n%10)*power(10,digitCount(n)-1)+reversedNumber(n/10);
}

int power(int n,int p){
    if(p==0) return 1;
    if(p==1) return n;
    return n*power(n,p-1);
}

int digitCount(int n){
    if(n<10) return 1;
    return 1+digitCount(n/10);
}