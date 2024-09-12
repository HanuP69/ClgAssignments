#include<stdio.h>
int main(){
    int arr[6] = {4, 7, 55, 77, 1, -5};
    int max = arr[0];
    int min = arr[0];
    for(int i =0; i<=sizeof(arr)/sizeof(arr[0])-1; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("The max is %d and min is %d", max, min);
}