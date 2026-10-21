// Assignment 2 - Write a program to calculate mean, median, and mode in a Discrete series.
#include <stdio.h>
int main(){

    // Taking input for number of elements in the array
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    float x[n],f[n];
    // Value input for X and F
    for (int i=0; i<=n-1; i++){
        printf("Enter the value of X[%d]: ", i + 1);
        scanf("%f", &x[i]);
        printf("Enter the value of F[%d]: ", i + 1);
        scanf("%f", &f[i]);
        printf("\n");
    
    }
    //---------------MEAN----------------
    
    float sumf=0, sumfx=0, sumfd=0, mean;
    int fx[n];

    for (int i=0; i<n; i++){
        fx[i]=x[i]*f[i];
        sumfx += fx[i];
        sumf += f[i];
    }
    printf("\n---------------- MEAN ----------------");
    mean = sumfx/sumf;
    printf("\nSum of Frequency is: %.2f",sumf);
    printf("\nSum of fx is: %.2f",sumfx);
    printf("\nDiscrete Mean is: %.2f",mean);

     
    // Sort the array in ascending order
    int temp = 0;
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
    // ---------------Median----------------
    int medianposition, cf = 0, median;
    medianposition = (sumf + 1) / 2;
    
    for (int i = 0; i < n; i++) {
        cf += f[i];
        if (cf >= medianposition) {
            median = x[i];
            break;
        }
    }
    printf("\n---------------- MEDIAN ----------------");
    printf("\nCumulative Frequency: %d", cf);
    printf("\nMedian:  %d", median);

    // ---------------Mode----------------
    int mode = x[0];
    int maxf = f[0];

    for(int i=0; i<n; i++){
        if (maxf <= f[i]){
            maxf = f[i];
            mode = x[i];
        }else if(maxf == f[i]){
            printf("\nMode: Invalid Mode");
            return 0;
        }
    }
    printf("---------------Mode----------------");
    printf("\nMaxFrequency: %d",maxf);
    printf("\nMode: %d",mode);
    

    // Table Format Output
    printf("\n\n---------------- TABLE ----------------\n");
    printf("X   | F   | FX ");
    for (int i=0; i<n; i++){
        printf("\n");
        printf("%.1f",x[i]);
        printf(" | ");
        printf("%.1f",f[i]);
        printf(" | ");
        printf("%d",fx[i]);
    }
    return 0;
}