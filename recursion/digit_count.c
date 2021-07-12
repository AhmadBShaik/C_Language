/* number of digits in an array */
#include<stdio.h>

int digitCount(int);

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("%d\n",digitCount(num));
}

int digitCount(int n){
    if(n<10) return 1;
    printf("%d\n",n);
    return 1+digitCount(n/10);
}