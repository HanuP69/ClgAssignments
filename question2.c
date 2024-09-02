//divisble
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d",&a);
    if(a%5==0 && a%11==0)
    {
        printf("THe number is divisble by 5 and 11");
    }
    else
    {
        printf("The number is not divisihle by 5 and 11");
    }
    return 0;
}