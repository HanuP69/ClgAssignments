#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "Hello";
    char str2[] = "World";
    char* ptr = (char*)malloc((strlen(str1)+strlen(str2))*sizeof(char));
    for(int i = 0; i<strlen(str1); i++){
        ptr[i] = str1[i];
    }
    for(int i = 0; i<strlen(str2); i++){
        ptr[5+i] = str2[i];
    }
    ptr[(strlen(str1)+strlen(str2))] = '\0';
    printf("%s", ptr);
    
    
}