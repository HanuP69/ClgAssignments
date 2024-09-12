#include<stdio.h>
int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 54};
    for(int i = sizeof(arr)/sizeof(arr[0])-1; i>=0; i--){
        printf("%d", arr[i]);
        printf(" ");
    }
}