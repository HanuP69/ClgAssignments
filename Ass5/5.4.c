#include <stdio.h>
int main(){
    int arr1[5] = {1, 4, 8, 7, 5};
    int arr2[5] = {1,2,3,4,5};
    int b = 0;
    for(int i = 0; i<5; i++){
        b = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = b;
    }
    for(int i = 0; i<5; i++){
        printf(" %d %d ", arr1[i], arr2[i]);
    }
}