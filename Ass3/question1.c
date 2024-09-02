#include<stdio.h>

int main()
{
  	int n, i;
  
  	printf("\n Please Enter any Integer Value  : ");
  	scanf("%d", &n);
  	
  	printf("\n List of Natural Numbers from 1 to %d are \n", n);  	
	for(i = 1; i <= n; i++)
  	{
    	printf(" %d \t", i);
  	}
  
  	return 0;
}