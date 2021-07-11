/* reverse an array */

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *array;
    int size,aux_size,index;
    printf("Enter size of array : ");
    scanf("%d",&size);
    
    array = (int*)malloc((size+1)*sizeof(int));
    for(int i = 1;i<=size;i++){
        scanf("%d",array+i);
    }

    aux_size = size;
    index=1;

    while(index<aux_size){
        *array = *(array+index);
        *(array+index) = *(array+aux_size);
        *(array+aux_size) = *array;
        index++;
        aux_size--;
    }

    for(int i = 1;i<=size;i++){
        printf("%d ",*(array+i));
    }
    printf("\n");
    return 0;
}