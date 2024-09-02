#include <stdio.h>
int main(){
    printf("Enter number you wanna find number of digits \n");
    int n;
    
    int count = 0;
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("Number of digit(s): %d", count);
}