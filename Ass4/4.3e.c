#include <stdio.h>
int main(){
    int row;
    printf("Enter number \n");
    scanf("%d", &row);
    int cols = 2*row-1;
    
    for(int cur_row = 1; cur_row<=row; cur_row++){
        for(int cur_col = 1; cur_col<=cols; cur_col++){
            {
                if(cur_col<=row+cur_row-1&&cur_col>=row-cur_row+1){
                    printf("%d", cur_row);
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }   
}