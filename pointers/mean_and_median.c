/* mean and median in an array */

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

    *array = *(array+1);
    for(int i = 1;i<=size;i++){ //sorting
        for(int j = 1;j<=size;j++){
            if(*(array+i)<*(array+j)){
                *array = *(array+i);
                *(array+i) = *(array+j);
                *(array+j) = *array;
            }
            
        }
    }
    *array = 0;
    printf("sorted array : ");
    for(int i = 1;i<=size;i++){
        *array += *(array+i);
        printf("%d ",*(array+i));
    }

    printf("\nmean is %.2f",(float)*array/size);
    if(size%2==0){
        printf("\nmedian is %.2f\n",(float)(*(array+(size/2)+1)+*(array+(size/2)))/2);
    }else{
        printf("\nmedian is %d\n",*(array+(size/2)+1));
    }
    free(array);
    array = NULL;
    return 0;
}