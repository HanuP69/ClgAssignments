#include<stdio.h>
int main(){
printf("Enter year \n");
int year;
scanf("%d", &year);
if(year%100!=0&&year%4==0||year%100==0&&year%400==0){
    printf("Leap year!");
}
else{
    printf("Not a leap year!");
}
}
/*Credits to Irfan Hashmi(roll: 29) for pointing out mistake in earlier code which caused 1900 to be a leap year*/