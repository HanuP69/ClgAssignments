#include < stdio.h>
int main(){
    printf("Enter number to convert to binary\n");
    int n;
    scanf("%d", &n);
    int count=0;
    int copy = n;
    while(copy!=0){
        copy = copy/2;
        count++;
    }
    int copy2 = n;
    int arr[32];
    for(int i = 0; i<=31; i++){
        arr[i]= 0;
    }
    for(int j = (sizeof(arr)-1)/sizeof(arr[0]); j>=0; j--){
        arr[j] = copy2%2;
        copy2/=2;

    }
    for(int k = 32 - count; k<=31; k++){
        printf("%d", arr[k]);
    }
}