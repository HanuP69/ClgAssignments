#include<stdio.h>
#include<math.h>


int main(){
float ID, twh, amt_perhr;
printf("ENTER ID: ");
scanf("%f", &ID);
printf("Worked for how many hours? : ");
scanf("%f", &twh);
printf("Per hour you get:  ");
scanf("%f", &amt_perhr);
printf("ID: %d\n salary : %f", (int)(ID),floor(twh*amt_perhr*100)/100);




}


