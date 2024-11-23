#include<stdio.h>

int main(){
    int arr[6] = {7, 6, 12, 5, 9, 2};
    for(int i = 1; i<sizeof(arr)/sizeof(arr[0]); i++){
        int temp  =arr[i];
        int j = i-1;
        while(j>=0&&temp<arr[j]){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    int b = 0;
    for(int i = 0; i<sizeof(arr)/sizeof(arr[0])/2; i++){
        b = arr[i];
        arr[i] =arr[sizeof(arr)/sizeof(arr[0])-1-i];
        arr[sizeof(arr)/sizeof(arr[0])-1-i] = b;

    }
    /*for(int i = 0; i<6; i++){
        printf("%d ", arr[i]);
    }*///for checking the array
   
    int n;
    scanf("%d", &n);
    for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i]==n){
            printf("Found at index %d", i);
            return 0;
        }
        
    }
    printf("Not found");
    return 0;
 

}   
