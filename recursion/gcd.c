/* gcd of two numbers */

#include<stdio.h>

int gcd(int,int);

int main(){
    printf("%d\n",gcd(18,16));
}

int gcd(int a,int b){
    if(a==0 || b==0) return 0;
    if(a==b) return a;
    if(a>b) return gcd(a-b,b);
    if(b>a) return gcd(a,b-a);
}