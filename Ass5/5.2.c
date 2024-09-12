#include<stdio.h>
int main(){
    int arr[5]= {4, 10, 5, 7, 69};
    int copy[sizeof(arr)/sizeof(arr[0])];
    for(int i =0; i<=sizeof(arr)/sizeof(arr[0])-1; i++){
        copy[i]= arr[i];
    }
    /*it's copied, question didn't asked to print copied array*/
}