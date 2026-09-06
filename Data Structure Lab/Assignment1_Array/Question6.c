/*Write a menu driven C program to perform following operations on a twodimensional m x n array:
(i) Insert elements in the array.
(ii) Display sum of all elements in the array.
(iii) Display average of all the elements in the array.
(iv) Find and display the smallest element in the array.
(v) Find and display the largest element in the array.*/

# include<stdio.h>
int main(){
    /*int row, col, sum=0;
    float avg;
    printf("Enter the Number of Rows: ");
    scanf("%d", &row);
    printf("Enter the Number of Columns: ");
    scanf("%d", &col);

    int a[row][col];
    int max = a[0][0], min = a[0][0];
    for (int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("Enter the value of a[%d][%d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
            sum += a[i][j];
            if (a[i][j] > max) {
                max = a[i][j];
            }
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }
    avg = (float)sum/(row*col);
    printf("Sum of all elements: %d\n", sum);
    printf("Average of all elements: %.2f\n", avg);
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    return 0;*/
    // Menu driven program
    int n, row, col;
    int sum = 0, max, min;
    float avg;
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
    while(n!=5){
        printf("\n");
        printf("-------menu-------\n");
        printf("1. Sum of all elements\n");
        printf("2. Average of all elements\n");
        printf("3. Maximum element\n");
        printf("4. Minimum element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &n);

        switch (n){
        case 1:
            for (int i=0; i<row; i++){
                for(int j=0; j<col; j++){
                    sum += a[i][j];
                }
            }
            printf("Sum of all elements: %d\n", sum);
            break;
        case 2:
            for (int i=0; i<row; i++){
                for(int j=0; j<col; j++){
                    sum += a[i][j];
                }
            }
            avg = (float)sum/(row*col);
            printf("Average of all elements: %.2f\n", avg);
            break;
        case 3:
            max = a[0][0];
            for (int i=0; i<row; i++){
                for(int j=0; j<col; j++){
                    if (max < a[i][j]) {
                        max = a[i][j];
                    }
                }
            }
            printf("Maximum element: %d\n", max);
            break;
        case 4:
            min = a[0][0];
            for (int i=0; i<row; i++){
                for(int j=0; j<col; j++){
                    if (a[i][j] < min) {
                        min = a[i][j];
                    }
                }
            }
            printf("Minimum element: %d\n", min);
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }
    return 0;
}