// Assignment 4 - Calculate geometric mean and harmonic mean for a discrete series.
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    float x[n], f[n], fxReciprocal[n], flogx[n];
    float sumf = 0.0f, sumFReciprocal = 0.0f, sumFLogX = 0.0f;
    printf("Enter Values (X):\n");
    for (int i = 0; i < n; i++){
        scanf("%f", &x[i]);
    }
    printf("Enter Frequency (F):\n");
    for (int i = 0; i < n; i++) {
        scanf("%f",&f[i]);

        fxReciprocal[i] = f[i] / x[i];
        flogx[i] = f[i] * log(x[i]);
        sumf += f[i];
        sumFReciprocal += fxReciprocal[i];
        sumFLogX += flogx[i];
    }

    printf("\nX\tF\tF/X\tlog(X)\tF*log(X)\n");
    printf("---------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",
               x[i], f[i], fxReciprocal[i], log(x[i]), flogx[i]);
    }
    printf("---------------------------------------------\n");
    printf("Total\t%.2f\t%.2f\t\t%.2f\n", sumf, sumFReciprocal, sumFLogX);

    printf("\nHarmonic Mean: %.2f", sumf / sumFReciprocal);
    printf("\nGeometric Mean: %.2f\n", exp(sumFLogX / sumf));

    return 0;
}