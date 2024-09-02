#include<stdio.h>
int main(){
    printf("Enter temperature in celcius: \n");
    float t;
    scanf("%f", &t);
    printf("The temperature in fahrenheit is: %f", (t*9/5+32));
}