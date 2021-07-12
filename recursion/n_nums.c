/* generate n natural numbers */

#include<stdio.h>

int generate(int,int);

int main(){
    int start,end;
    printf("Enter a starting and ending numbers of sequence: ");
    scanf("%d",&start);    
    scanf("%d",&end);  

    // printf("%d %d\n",start,end);
    generate(start,end);
}

int generate(int s,int e){
    printf("%d",s);
    if(s==e){
        printf("\n");
        return 0;       
    }
    printf(",");
    return generate(s+1,e);
}