#include<stdio.h>
// Assignment 3 - Write a program to calculate mean, median, and mode in a Continuous series.
int main() {
    // Continuous Mean Calculation
    int n, a, b, avg; 
    float sumf=0, sumfx=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int x[n],f[n],fx[n];

    // Continuous Direct Series Mean Calculation
    for (int i=0; i<n;i++){
        printf("Enter the X%d first interval: ", i + 1);
        scanf("%d",&a);
        printf("Enter the X%d second interval: ", i + 1);
        scanf("%d",&b);
        avg = (a+b)/2;
        x[i] = avg;
    }
    printf("\nEnter Frequency\n");
    for (int i=0; i<=n-1;i++){
        printf("Enter the value of F[%d]: ", i + 1);
        scanf("%d", &f[i]);
         sumf += f[i];
         fx[i] = x[i]*f[i];
         sumfx += fx[i];
    }
    float mean  = sumfx/sumf;
    printf("\nSum of Frequency is: %.2f",sumf);
    printf("\nSum of fx is: %.2f",sumfx);
    printf("\nContinuous Direct Mean is: %.2f",mean);

    // Continuous Assumed Mean Calculation
    float sumfd=0;
    int au, d[n], fd[n];
    printf("\n\nContinuous Assumed Mean Calculation");
    printf("\nEnter the Assumed Mean: ");
    scanf("%d",&au);

    for (int i=0; i<n; i++){
        d[i] = x[i] - au;
        fd[i] = f[i] * d[i];
        sumfd += fd[i];
    }
    float auMean = au + (sumfd/sumf);
    printf("\nSum of fd is: %.2f",sumfd);
    printf("\nContinuous Assumed Mean is: %.2f",auMean);
    return 0;
}   