#include<stdio.h>
int main(){
    int element, position;
    scanf("%d %d" ,&element, &position);
    int arr[5] = {1,2,3,4,5};
    int* ptr  = &arr[4];
    ptr++;
    *ptr = arr[4];
    for(int i = 4; i>position; i--){
        arr[i] = arr[i-1];
    }
    arr[position] = element;
    for(int i = 0; i<=5; i++){
        printf("%d ", *(&arr[0]+i));
    }
}
