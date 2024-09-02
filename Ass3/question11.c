#include<stdio.h>
#include<math.h>
int main()
{
     int p;
     printf("Enter number to check if it is prime |n");
     scanf("%d",&p);
      int i, count = 0;
    for(i = 1; i <=p; i++) 
    {
      if(p% i == 0) 
        count += 1;
    } 
       if(p== 0 || p== 1)
         printf("%d is not prime",p); 
       else if(count > 2) 
          printf("%d is not prime",p);
       else
         printf("%d is prime",p);

  return 0;
}
