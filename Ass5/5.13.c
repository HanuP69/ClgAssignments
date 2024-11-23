#include<stdio.h>
int main(){ /*assuming that both square matrix are of same dimensions*/
    int arr1[3][3] = {1,2,3,4,5,6,7,8,9};
    int arr2[3][3] = {4,5,6,7,8,9,12,3,4};
    int arr3[3][3] = {0,0,0,0,0,0,0,0,0};
    int sum = 0;
    
    int index = 0;
    for(int  i = 0; i<3; i++){
        sum = 0;
        
        for(int j = 0; j<3; j++){
          
          for(int k = 0; k<3; k++){
            sum+=arr1[i][k]*arr2[k][j];
          }
            arr3[i][j] = sum;
            sum = 0;
        }
        
        
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}