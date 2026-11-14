#include <stdio.h>

// Assignment 3 - Write a program to calculate mean, median, and mode in a Continuous series.
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float x[n], fx[n];
    int f[n], li[n], ui[n], cf[n];

    printf("Enter Class Intervals (X):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &li[i], &ui[i]);

        if (li[i] > ui[i]) {
            int temp = li[i];
            li[i] = ui[i];
            ui[i] = temp;
        }

        x[i] = (li[i] + ui[i]) / 2.0f;
    }

    printf("Enter Frequency (F):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &f[i]);
    }

    // ---------Mean------------
    float sumf = 0.0f, sumfx = 0.0f;
    for (int i = 0; i < n; i++) {
        sumf += f[i];
        fx[i] = x[i] * f[i];
        sumfx += fx[i];
    }
    float mean = sumfx / sumf;

    // ---------Median-----------
    cf[0] = f[0];
    for (int i = 1; i < n; i++) {
        cf[i] = cf[i - 1] + f[i];
    }

    int medianClass = 0;
    float N = sumf;
    for (int i = 0; i < n; i++) {
        if ((N / 2.0f) <= cf[i]) {
            medianClass = i;
            break;
        }
    }

    float lowerlimit = li[medianClass];
    float fre = f[medianClass];
    int classWidth = ui[medianClass] - li[medianClass];
    float c = (medianClass > 0) ? cf[medianClass - 1] : 0.0f;
    float median = lowerlimit + ((N / 2.0f - c) / fre) * classWidth;

    // ---------Mode-----------
    int maxf = f[0], modeclass = 0;
    for (int i = 1; i < n; i++) {
        if (f[i] > maxf) {
            maxf = f[i];
            modeclass = i;
        }
    }

    float f0 = (modeclass > 0) ? f[modeclass - 1] : 0.0f;
    float f1 = f[modeclass];
    float f2 = (modeclass < n - 1) ? f[modeclass + 1] : 0.0f;
    float l1 = li[modeclass];
    int interval = ui[modeclass] - li[modeclass];
    float mode = l1 + ((f1 - f0) / (2 * f1 - f0 - f2)) * interval;

    printf("\nClass \t\tX\tF\tFX\tCF\n");
    printf("---------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d-%d\t\t%.1f\t%d\t%.1f\t%d\n",
               li[i], ui[i], x[i], f[i], fx[i], cf[i]);
    }

    printf("---------------------------------------------------------------\n");
    printf("Total F = %.0f\tTotal FX = %.1f\n", sumf, sumfx);
    printf("\nMean   = %.2f\n", mean);
    printf("Median = %.2f\n", median);
    printf("Mode   = %.2f\n", mode);

    return 0;
}
