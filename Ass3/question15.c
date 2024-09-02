#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("Enter the numbers in between which sum has to be calculated \n");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(i%17!=0)
        sum+=i;
    }
    printf("The sum is %d \n",sum);
    return 0;
}