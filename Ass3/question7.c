#include<stdio.h>
int main()
{
  int n, r= 0, re, og;

  printf("Enter an integer: ");
  scanf("%d", &n);

  og = n;  

  while (n != 0) {
    re = n % 10;
    r = r * 10 + re;
    n /= 10;
  }

  if (og % 10 == 0)
   {
    printf("Reversed number = %d", r);
    
    while (og % 10 == 0) 
    {
      printf("0");
      og /= 10;
    }
  } 
  else 
  {
    printf("Reversed number = %d", r);
  }

  return 0;
}
