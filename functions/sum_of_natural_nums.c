/* sum of n natural numbers using recursion */

#include<stdio.h>

int sum = 0;
int naturalSum(int);

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("%d\n",naturalSum(num));
}

int naturalSum(int num){
    if(num==0) return sum;
    sum += num;
    return naturalSum(num-1);   
}