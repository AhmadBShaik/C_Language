/* sum of elements in an array */

#include<stdio.h>

int arraySum(int[],int);

int main(){
    int array[5] = {1,2,3,4,5};
    printf("%d\n",arraySum(array,sizeof(array)/sizeof(int)));
}

int arraySum(int a[],int s){
    if(s==1) return a[s-1];
    return a[s-1]+arraySum(a,s-1);
}