#include <stdio.h>
int main(){
    char ch;
    printf("Enter your character\n");
    scanf("%c", &ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("it's a vowel");
    
    
}
    else{
        printf("It's a consonant");
}

}