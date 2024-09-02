#include<stdio.h>
int main(){
    printf("Enter range for fibonacci sequence \n");
    int n;
    scanf("%d",&n);
    
    int a = -1; 
    int b = 1;
    int s = a + b;
    for(int i = 1; i<=n; i++){
        s = a + b;
        a = b;
        b = s;
        printf(" %d ", s);
    }
}
