/* checking for valid amstrong number, check for valid prime number */

#include<stdio.h>
#include<string.h>

int isPrime(int);
int isAmstrong(int);


int main(){
    int num;
    
    printf("Enter a number for prime check : ");
    scanf("%d",&num);
    
    if(isPrime(num)){
        printf("%d is a prime number\n",num);    
    }else{
        printf("%d is not a prime number\n",num);    
    }

    printf("Enter a number for amstrong check : ");
    scanf("%d",&num);
    
    if(isAmstrong(num)){
        printf("%d is an amstrong number\n",num);    
    }else{
        printf("%d is not an amstrong number\n",num);    
    }
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


int isAmstrong(int num){
    int temp = num;
    int rem,sum=0;
    while (temp>0){
        rem = temp % 10;
        temp /= 10;
        sum+=rem*rem*rem;
    }
    if(num == sum) return 1;
    return 0;
}