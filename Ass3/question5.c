#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter the number for factorial \n");
    scanf("%d",&n);
    for (int i=n; i>0; i--)
    {
        fact=fact*i;
    }
    printf("The factorial is %d \n",fact);
    return 0;
    

}