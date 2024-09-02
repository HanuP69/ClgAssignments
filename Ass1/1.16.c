#include<stdio.h>
int main(){
float w1, w2, n1, n2;
printf("Weight of first item : ");
scanf("%f", &w1);
printf("Weight of second item : ");
scanf("%f", &w2);
printf("Number of first item : ");
scanf("%f", &n1);
printf("Number of second item : ");
scanf("%f", &n2);

printf("\n the average is %f",(n1*w1+n2*w2)/(n1+n2));
}


