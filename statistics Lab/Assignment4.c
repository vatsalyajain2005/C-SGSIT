// Assignment 4 - Write a program to calculate geometric mean and hermonic mean for a Discrete series.
# include<stdio.h>
# include<math.h>
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
    // ---------HermonicMean------------
    
    float reci[n] ,sumdfx = 0 , HermonicMean, Divfx[n];
    for (int i = 0; i < n; i++) {
        Divfx[i] = f[i]/x[i];
        sumdfx += Divfx[i];
    } 
    HermonicMean = n/sumdfx;
    printf("\nHermonic Mean is: %.2f\n", HermonicMean);

    // ---------GeometricMean------------
    float logx[n], flogx[n], sumflogx = 0, ok, antilog, GeometricMean, sumf =0;
    for (int i = 0; i < n; i++) {
        logx[i] = log(x[i]);
        flogx[i] = f[i]*logx[i];
        sumflogx += flogx[i];
        sumf += f[i];
    } 
    GeometricMean = exp(sumflogx / sumf);
    printf("\nGeometric Mean: %.2f",GeometricMean);
    return 0;
}