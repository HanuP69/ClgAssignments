#include<stdio.h>
int main(){
    printf("Enter three numbers\n");
    int a,b,c,max;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b&&a>c){
        max = a;
    }
    else if(b>a&&b>c){
        max = b;
    }
    else{
        max = c;
    }
printf("Greatest among them is %d", max);

}