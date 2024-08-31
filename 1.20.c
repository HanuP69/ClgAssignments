#include<stdio.h>
#include<math.h>
int main(){
printf("Enter x1, x2, y1 and y2 \n");
int x1, x2, y1, y2;
scanf("%d", &x1);
scanf("%d", &x2);
scanf("%d", &y1);
scanf("%d", &y2);
printf("distance b/w points is: %f ", sqrt(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))));
}