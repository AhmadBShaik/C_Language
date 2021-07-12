/* maximum element in an array */

#include<stdio.h>

int maxOf(int[],int,int);

int main(){

    int array[8] = {10,2,5,4,3,9,3,2};
    printf("%d\n",maxOf(array,sizeof(array)/sizeof(int),array[0]));
}

int maxOf(int a[],int s,int m){
    if(m<a[s-1]) m = a[s-1];
    if(s==1) return m; 
    return maxOf(a,s-1,m);
}