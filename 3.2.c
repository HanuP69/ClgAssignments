#include<stdio.h>
int main(){
    int s = 0;
    printf("Till what range you wanna print\n");
    int n;
    scanf("%d",&n);

    for(int i = 0; i<=n; i+=2){
        s=s+i;
    }
    printf("The sum is %d",s);
    /*or use formula of sequence and series*/
}