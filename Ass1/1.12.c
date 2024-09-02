#include<stdio.h>
int main(){
    int a = 10;
    int b = 5;
    printf("Numbers are %d and %d", a, b);
    int c = b;
    b = a;
    a = c;
    printf(", Now they are %d and %d", a, b);
}