#include <stdio.h>
int main(){
    printf("Enter number\n");
    int n;
    scanf("%d",&n);
    for(int i =1; i<=100; i++){
        if(n%i == 3){
            printf("%d\n",i);
        }
    }
}