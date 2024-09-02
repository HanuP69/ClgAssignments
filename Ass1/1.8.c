#include<stdio.h>
int main(){
printf("Enter lower case character \n");
char ch;

scanf("%c", &ch);
int l = (int)(ch)-32;
if(ch>=97&&ch<=122){
    printf("Upper case value is %c", l);
}
else{
    printf("Not an lower case character");
}

}