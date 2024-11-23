#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int position;
    scanf("%d", &position);
    int* ptr = &arr[position];
    for(int i = 0; i<=4-position; i++){
        *(ptr+i) = *(ptr+i+1);
    }
    
    for(int i = 0; i<=3; i++){//iterate till size-1
        printf("%d ", arr[i]);
    }

}