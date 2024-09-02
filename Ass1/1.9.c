#include<stdio.h>
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    int ldig = n%10;
    int fdig, dig;
    while(n!=0){
        dig = n%10;
        n=n/10;
        if(n/10==0){
            fdig = dig;
        }
    }
    printf("The sum of first and last digit is: %d", fdig+ldig);
}