/* sum of positive numbers in an array */

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *array;
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    
    array = (int*)malloc((size+1)*(sizeof(int)));

    for(int i = 1;i<=size;i++){
        scanf("%d",(array+i));
    }
    for(int i = 0;i<=size;i++){
        if(*(array+i) > 0){
            *array += *(array+i) ;
        }
    }
    printf("sum of positive numbers is %d\n",*array);
    
    return 0;
}