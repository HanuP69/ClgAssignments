#include<stdio.h>
int main()
{
  int a,i;
  printf("Enter the number to get multiplication table \n");
  scanf("%d",&a);
  printf("The table upto 20 is");
  for(int i=1;i<=20;i++)
  {
    printf("%d*%d=%d \n",a,i,a*i);
  }
  return 0;
}