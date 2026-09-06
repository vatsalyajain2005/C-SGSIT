/*Write a C program to read the elements of a m × n Array and display the array
    elements in proper row and column format.*/
# include<stdio.h>
int main(){
    int row, col;
    printf("Enter the Number of Rows: ");
    scanf("%d", &row);
    printf("Enter the Number of Columns: ");
    scanf("%d", &col);

    int a[row][col];
    for (int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("Enter the value of a[%d][%d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i=0;i<row;i++){
        for(int j=0; j<col;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}