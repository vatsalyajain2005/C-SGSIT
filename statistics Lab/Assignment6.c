#include<stdio.h>
#include <math.h>
int main(){
    int n,a,b,avg; 
    printf("Enter the number of classes: ");
    scanf("%d",&n);
    int x[n],f[n], li[n],ui[n];
    
    printf("Enter Class Intervals (X):\n");
    for (int i=0; i<n; i++){
        scanf("%d %d",&li[i], &ui[i]);
        x[i] = (li[i]+ui[i]) / 2;
    }
    printf("Enter Frequency (F):\n");
    for (int i=0; i<n; i++){
        scanf("%d", &f[i]);
    }

    // Mean 
    int fx[n];
    float sumfx = 0, sumf=0;
    for (int i=0; i<n; i++){
        fx[i] = f[i] * x[i];
        sumfx = sumfx + fx[i];
        sumf += f[i];
    }

    float mean = sumfx/sumf;

    // Standard Deviation
    float XminM[n], sqXminM[n],fsqXminM[n];
    float sum=0;
    for (int i=0; i<n; i++){
        XminM[i] = x[i] - mean;
        sqXminM[i] = XminM[i] * XminM[i];
        fsqXminM[i] = f[i] * sqXminM[i];
        sum += fsqXminM[i];
    }
    float SD = sqrt(sum/sumf);

    printf("\n");
    printf("X\tF\tFX\t\t|X-M|\t\t|X-M|^2\t\tF|X-M|^2\n");
    printf("---------------------------------------------------------------------------\n");
    for (int i=0; i<n; i++){
        printf("%d\t%d\t%d\t\t%.2f\t\t%.2f\t\t%.2f\n", x[i], f[i], fx[i], XminM[i], sqXminM[i], fsqXminM[i]);
    }   
    printf("---------------------------------------------------------------------------\n");
    printf("Total\t%.0f\t%.0f\t\t\t\t\t\t%.2f\n", sumf, sumfx, sum);

    printf("\nMean is:%.2f",mean);
    printf("\nStandard Deviation:%.2f",SD);
     return 0;
}