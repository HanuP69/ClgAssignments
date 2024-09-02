#include <stdio.h>
int main(){
    int a = 5;
    int b = 8;
    printf("Initial values of a and b are %d and %d", a,b);
    a= a+b;
    b=a-b;
    a=a-b;
    printf(", final values are %d and %d", a, b);

}