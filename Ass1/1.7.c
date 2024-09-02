#include<stdio.h>
int main(){
printf("Enter upper case character \n");
char ch;

scanf("%c", &ch);
int l = (int)(ch)+32;
if(ch>=65&&ch<=90){
    printf("Lower case value is %c", l);
}
else{
    printf("Not an upper case character");
}

}