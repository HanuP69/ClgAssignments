#include<stdio.h>
int main(){
    printf("Enter your number: \n");
    int n;
    scanf("%d", &n);
    if(n%55==0){
        printf("Divisibe by both 11 and 5.");
    
    }
    else{
        printf("not divisible by 11 and 5");
    }
}