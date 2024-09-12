#include<stdio.h>
#include<stdbool.h>
int main(){
    bool a = true;
    printf("Enter length\n");
    int row;
    scanf("%d",&row);
    for(int i = 1; i<=row; i++){
        for(int j = 1; j<=i; j++){
            if(a){
                printf("1");
                a=!a;
            }
            else{
                printf("0");
                a=!a;
            }
        }
        printf("\n");
    }
}