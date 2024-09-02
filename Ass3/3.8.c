#include <stdio.h>
#include <math.h>
int digcalc(int n){
    
    
    int count = 0;
    
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}
int main(){
    printf("Enter number you wanna check: \n");
    int n;
    scanf("%d",&n);
    int copy =n;
    int rev = 0;int dig =0;int i = digcalc(copy);
    while (copy!=0)
    {   dig = copy%10;
        copy = copy/10;
        rev = pow(10,i-1)*dig + rev;
        i--;
    }
    if(rev == n){
        printf("Palindrome number");
    }
    else{
        printf("Not a palindrome");
    }

}