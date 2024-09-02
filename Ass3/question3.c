#include<stdio.h>
int main()
{
    int a,sum=0;
    printf("Enter the number till which you want sum \n");
    scanf("%d",&a);
    for(int i=0;i<=a;i++)
    {
      sum=sum+i;
    }
    printf("The sum is %d \n",sum);
    return 0;
}