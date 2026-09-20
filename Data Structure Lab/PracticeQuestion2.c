// Q.2.   Write a program to read an integer Array A[3][4] and print the largest element in each row of the array.

#include<stdio.h>

int main(){
    int row,col;
    printf("Enter the Row: ");
    scanf("%d",&row);
    printf("Enter the Col: ");
    scanf("%d",&col);
    int arr[row][col];
    int max;

    for (int i=0; i<=row-1; i++){
        for (int j=0; j<=col-1; j++){
            printf("Enter Row[%d] col[%d]: ",i+1, j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    for (int i=0; i<row; i++){
        max = arr[0][0];
        for (int j =0; j<col; j++){
            if (max < arr[i][j]){
                max = arr[i][j];
            } 
        }
        printf("%d ",max);
    }

    return 0;

}