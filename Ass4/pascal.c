#include <stdio.h>
int fact(int n){
    int prod = 1;
    for(int i = 1; i<=n;i++){
        prod = prod * i;
    }
    return prod;
}
int combinations(int n, int r){
    if(n==r||r==0||n==0)
    {
        return 1;
    }

    else
    {
        return fact(n)/(fact(n-r)*fact(r));
    }
}
int main(){
    printf("Enter length\n");
    int row;
    scanf("%d", &row);
    int col = 2*row-1;
    int r = 0;
    for(int cur_row = 1; cur_row<=row; cur_row++)
    {
        r = 0;
        for(int cur_col = 1; cur_col<=col; cur_col++)
        {
            if(row%2==0){
            if(cur_col>=row-cur_row+1&&cur_col<=row+cur_row-1)
            {
                if(cur_row%2==0&&cur_col%2==1){
                    printf("%d",combinations(cur_row-1,r));
                    r++;
                }
                else if(cur_row%2==1&&cur_col%2==0)
                {
                    printf("%d",combinations(cur_row-1,r));
                    r++; 
                }
                else
                {
                    printf(" ");
                }
            }
            else{
                printf(" ");
            }
            }
            else
            {
                if(cur_col>=row-cur_row+1&&cur_col<=row+cur_row-1)
                {
                    if((cur_row%2==0&&cur_col%2==0)||cur_col%2==1&&cur_row%2==1)
                    {
                        printf("%d",combinations(cur_row-1,r));
                        r++;
                    }
                    else{
                    printf(" ");
                }
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}