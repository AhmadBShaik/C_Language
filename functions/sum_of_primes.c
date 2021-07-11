/* check whether the number is sum of primes or not */

#include<stdio.h>

int isValidPrimeSum(int);
int isPrime(int);

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(isValidPrimeSum(num)){
        printf("sum of primes is possible\n");
    }else{
        printf("sum of primes is not possible\n");
    }
}

int isValidPrimeSum(int num){
    for(int i=2;i<num-1;i++){
        if(isPrime(i) && isPrime(num-2)) {
            printf("%d + %d\n",i,num-2);
            return 1;
        }
        num -= 1;
    }
    return 0;
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
