#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "HelloBaby";
    char* str2 = (char*)malloc(strlen(str)*sizeof(char));
    for(int i = 0; i<strlen(str);i++){
        str2[i] = str[strlen(str)-1-i];
    }
    for(int i = 0; i<strlen(str); i++){
        str[i] = str2[i];
    }
    free(str2);
    printf("%s", str);
}