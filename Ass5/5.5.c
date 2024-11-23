#include<stdio.h>
#include<math.h>
int main(){
    int arr[10] = {10, 12, 23, 23, 16, 23, 21, 16, 40, 10};
    float sum = 0;
    for(int i = 0; i<10; i++){
        sum += arr[i];

    }
    float average = sum/10;
    
    sum = 0;
    for(int i = 0; i<10; i++){
        sum+= pow((arr[i]-average),2);
    }
    float stddev = sqrt(sum/10);
    printf(" %f %f ", average, stddev);

}