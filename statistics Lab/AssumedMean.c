#include <stdio.h>
int main(){

    // Discrete Mean Calculation
    int n, au;
    float sumf=0, sumfx=0, sumfd=0, mean;
    int temp = 0, median;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    float x[n],f[n],fx[n],d[n],fd[n];
    // Discrete Direct Series Mean Calculation
    for (int i=0; i<=n-1; i++){
        printf("Enter the value of X[%d]: ", i + 1);
        scanf("%f", &x[i]);
        printf("Enter the value of F[%d]: ", i + 1);
        scanf("%f", &f[i]);
        printf("\n");
        fx[i]=x[i]*f[i];
        sumfx += fx[i];
        sumf += f[i];
    }
    
    printf("\n---------------- MEAN ----------------");
    mean = sumfx/sumf;
    printf("\nSum of Frequency is: %.2f",sumf);
    printf("\nSum of fx is: %.2f",sumfx);
    printf("\nDiscrete Mean is: %.2f",mean);

    Discrete Assumed Mean Calculation
    printf("\n\nDiscrete Assumed Mean Calculation");
    printf("\nEnter the Assumed Mean: ");
    scanf("%d",&au);

    for (int i=0; i<n; i++){
        d[i] = x[i] - au;
        fd[i] = f[i] * d[i];
        sumfd += fd[i];
    }
    mean = au + (sumfd/sumf);
    printf("\nSum of fd is: %.2f",sumfd);
    printf("\nDiscrete Assumed Mean is: %.2f", mean);