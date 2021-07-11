/* prime numbers between two intervals */

#include<stdio.h>

int isPrime(int);
void primeGenerator(int,int);

int main(){
    int start,end;
    printf("Enter starting and ending intervals : ");
    scanf("%d%d",&start,&end);
    
    primeGenerator(start,end);
}

int isPrime(int num){
    if(num<2) return 0;
    int count = 0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            count++;
        }
    }
    return (count==0)? 1 : 0;
}
void primeGenerator(int s,int e){
    for(int i=s;i<=e;i++){
        if(isPrime(i)){
            printf("%d\n",i);
        }
        // isPrime(i);
        // printf("%d\n",isPrime(i));
    }
}