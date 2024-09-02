#include<stdio.h>
int main(){
    int n;
    printf("Enter number to reverse digits\n");
    scanf("%d", &n);
    
    int dig;
    while(n!=0){
        dig = n%10;
        n = n/10;
        printf("%d",dig);
    }
    
}