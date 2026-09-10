// Assignment 2 - Write a program to calculate mean, median, and mode in a Discrete series.
#include <stdio.h>
int main(){

    // Discrete Mean Calculation
    // int n, au;
    // float sumf=0, sumfx=0, sumfd=0, mean;
    // printf("Enter the number of elements in the array: ");
    // scanf("%d",&n);

    // float x[n],f[n],fx[n],d[n],fd[n];
    // // Discrete Direct Series Mean Calculation
    // for (int i=0; i<=n-1; i++){
    //     printf("Enter the value of X[%d]: ", i + 1);
    //     scanf("%f", &x[i]);
    //     printf("Enter the value of F[%d]: ", i + 1);
    //     scanf("%f", &f[i]);
    //     fx[i]=x[i]*f[i];
    //     sumfx += fx[i];
    //     sumf += f[i];
    // }
    
    // mean = sumfx/sumf;
    // printf("\nSum of Frequency is: %.2f",sumf);
    // printf("\nSum of fx is: %.2f",sumfx);
    // printf("\nDiscrete Mean is: %.2f",mean);

    // // Discrete Assumed Mean Calculation
    // printf("\n\nDiscrete Assumed Mean Calculation");
    // printf("\nEnter the Assumed Mean: ");
    // scanf("%d",&au);

    // for (int i=0; i<n; i++){
    //     d[i] = x[i] - au;
    //     fd[i] = f[i] * d[i];
    //     sumfd += fd[i];
    // }
    // mean = au + (sumfd/sumf);
    // printf("\nSum of fd is: %.2f",sumfd);
    // printf("\nDiscrete Assumed Mean is: %.2f", mean);


    // Median Discrit Series
    int n,temp = 0,median,sumf=0;
    printf("Enter the element: ");
    scanf("%d",&n);
    int x[n],f[n];

    for (int i=0;i<n;i++){
        printf("Enter the value of X[%d]: ", i + 1);
        scanf("%d", &x[i]);
        printf("Enter the value of F[%d]: ", i + 1);
        scanf("%d", &f[i]);
        printf("\n");
        sumf += f[i];
    } 
    // Discrete Median 
    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {
            if (x[j] > x[j + 1]) {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;

                temp = f[j];
                f[j] = f[j + 1];
                f[j + 1] = temp;
            }
        }
    }
    median = (sumf + 1) / 2;
    int cf = 0;
    for (int i = 0; i < n; i++) {
        cf += f[i];
        if (cf >= median) {
            printf("The Median of the Discrete series is: %d\n", x[i]);
            break;
        }
    }


    // for (int i=0;i<n;i++){
    //     printf("%d\n",x[i]);
    // } 
    // printf("\n");
    // for (int i=0;i<n;i++){
    //     printf("%d\n",f[i]);
    // } 


    return 0;
}