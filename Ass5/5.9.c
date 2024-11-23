#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[5]= {1,2,3,4,5};
    printf("Original \n");
    for(int i = 0 ; i<=4; i++){
        printf("%d " , arr[i]);
    }
   
    printf("\n left shifted \n");
    int temp = arr[0];
    for(int i = 1; i<=4; i++){
        arr[i-1] = arr[i];

    }
    arr[4] = temp;
    for(int i = 0; i<=4; i++){
        printf("%d " ,arr[i]);
    }

}