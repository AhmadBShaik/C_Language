/* number of distinct elements in an array */

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *array;
    int size,count,temp_count;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    array = (int*)malloc(size*sizeof(int));
    for(int i=0;i<size;i++){
        scanf("%d",array+i);
    }

    for(int i=0;i<size;i++){
        temp_count = 0;
        for(int j=i+1;j<size;j++){
            if(*(array+i) == *(array+j)){
                temp_count++;
            }
        }
        if(temp_count==0){
            count++;
        }
    }
    printf("There are %d distinct elements\n",count);
    return 0;
} 