#include<stdio.h>
#include<string.h>

int main(){
char ch[100];
printf("Enter the string you want\n");
scanf("%s", &ch);

for(int i = strlen(ch); i>=0; i--){
printf("%c", ch[i]);
}

}