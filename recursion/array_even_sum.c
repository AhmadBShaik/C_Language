/* sum of even elements in an array */

#include<stdio.h>

int arrayEvenSum(int[],int);

int main(){
    int array[5] = {1,2,2,6,5};
    printf("%d\n",arrayEvenSum(array,sizeof(array)/sizeof(int)));
}

int arrayEvenSum(int a[],int s){
    if(s==1) return 0;
    if(a[s-1]%2 != 0) return arrayEvenSum(a,s-1);
    return a[s-1]+arrayEvenSum(a,s-1);
}