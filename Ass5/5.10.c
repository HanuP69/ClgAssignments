#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("enter range ");
    int n;
    scanf("%d", &n);
    int* ptr = (int* )malloc(n * sizeof(int)); //created an array of n elements;
    if(n==1){
        printf("0");
        return 0;

    }
    if(n==2){
        printf("0 1");
        return 0;
    }
    ptr[0] = 0;
    ptr[1] = 1;
    
    
    
    for(int i = 2; i<=n-1; i++){
        ptr[i] = ptr[i-1]+ptr[i-2];
    }
    
    for(int i = 0; i<n; i++){
        printf("%d ", ptr[i]);
    }



    

}