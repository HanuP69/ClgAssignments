#include<stdio.h>
int main(){
    printf("Enter your number: \n");
    int n;
    scanf("%d", &n);
    if(n>0){
        printf("Positive");
    }
    else if(n<0){
        printf("Negative");
    }
    else {
        printf("Zero");
    }
}