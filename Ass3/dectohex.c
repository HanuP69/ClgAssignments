#include < stdio.h>
int main(){
    printf("Enter number to convert to hrx value\n");
    int n;
    scanf("%d", &n);
    int count=0;
    int copy = n;
    while(copy!=0){
        copy = copy/16;
        count++;
    }
    int copy2 = n;
    int arr[8];
    for(int i = 0; i<=7; i++){
        arr[i]= 0;
    }
    for(int j = (sizeof(arr)-1)/sizeof(arr[0]); j>=0; j--){
        arr[j] = copy2%16;
        copy2/=16;

    }
    for(int k = 8 - count; k<=7; k++){
        if(arr[k]>=10&&arr[k]<=15){
            printf("%c", arr[k]+55);
        }
        else{
            printf("%d", arr[k]);
        }
    }
}