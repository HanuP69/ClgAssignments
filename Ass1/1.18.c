#include<stdio.h>
int main(){
printf("Enter year \n");
int year;
scanf("%d", &year);
if(year%400==0||year%4==0){
    printf("Leap year!");
}
else{
    printf("Not a leap year!");
}
}