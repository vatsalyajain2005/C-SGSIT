#include<stdio.h>
#include <math.h>
int main(){
    int n,a,b,avg; 
    printf("Enter Number: ");
    scanf("%d",&n);
    int x[n],f[n], li[n],ui[n];
    
    for (int i=0; i<n; i++){
        printf("Enter the X%d first interval: ", i + 1);
        scanf("%d",&li[i]);
        printf("Enter the X%d Second interval: ", i + 1);
        scanf("%d",&ui[i]);

        x[i] = (li[i]+ui[i]) / 2;
    }
    for (int i=0; i<n; i++){
        printf("Enter the value of F[%d]: ", i + 1);
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


    printf("\n\n---------------- TABLE ----------------\n");
    printf("Interval    X    F    FX    X-M    (X-M)^2    F(X-M)^2");
    for (int i=0; i<n; i++){
        printf("\n");
        printf("%d-%d",li[i],ui[i]);
        printf("    ");
        printf("%d",x[i]);
        printf("    ");
        printf("%d",f[i]);
        printf("    ");
        printf("%d",fx[i]);
        printf("    ");
        printf("%.2f",XminM[i]);
        printf("    ");
        printf("%.2f",sqXminM[i]);
        printf("    ");
        printf("%.2f",fsqXminM[i]);
    }
    printf("\nMean is:%.2f",mean);
    printf("\nSum of F(X-M)^2:%.2f",sum);
    printf("\nSum of F:%.2f",sumf);
    printf("\nStandard Deviation:%.2f",SD);
     return 0;
}