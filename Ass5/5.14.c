#include<stdio.h>
int main(){
    char str[] = "Hello";
    int count = 0;
    for(int i = 0;;i++){
        if(str[i] == '\0'){
            break;
        }
        else{
            count++;
        }
        
    }
    printf("%d", count);
}