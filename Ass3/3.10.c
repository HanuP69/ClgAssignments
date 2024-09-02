#include <stdio.h>
int main(){
    printf("Enter number to see armstrong or not\n");
    int n;
    scanf("%d",&n);
    int a = 0;
    int dig =0;
    int copy = n;
    while (copy!=0)
    {
        dig = copy % 10;
        copy = copy/10;
        a = a + dig*dig*dig;
    }
    if(a==n){
        printf("Armstrong number");
    }
    else {
        printf("Not an armstrong number");
    }
    
}