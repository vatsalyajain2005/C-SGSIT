// Assignment 2 - Write a program to calculate mean, median, and mode in a Discrete series.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    float x[n];
    int f[n], cf[n];
    float fx[n];

    printf("Enter the values of X: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }

    printf("Enter the values of F: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &f[i]);
    }
    // Mean calculation
    float sumfx = 0.0f, sumf = 0.0f;
    for (int i = 0; i < n; i++) {
        fx[i] = x[i] * f[i];
        sumfx += fx[i];
        sumf += f[i];
    }

    float mean = sumfx / sumf;

    // Sort the array in ascending order while keeping the frequency values aligned
    float tempX;
    int tempF;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (x[j] > x[j + 1]) {
                tempX = x[j];
                x[j] = x[j + 1];
                x[j + 1] = tempX;

                tempF = f[j];
                f[j] = f[j + 1];
                f[j + 1] = tempF;
            }
        }
    }
    // Median calculation
    cf[0] = f[0];
    for (int i = 1; i < n; i++) {
        cf[i] = cf[i - 1] + f[i];
    }

    float median;
    int totalFrequency = (int)sumf;
    if (totalFrequency % 2 == 0) {
        int mid1 = totalFrequency / 2;
        int mid2 = mid1 + 1;
        for (int i = 0; i < n; i++) {
            if (cf[i] >= mid1 && cf[i] < mid2) {
                median = x[i];
                break;
            }
        }
    } else {
        int mid = (totalFrequency + 1) / 2;
        for (int i = 0; i < n; i++) {
            if (cf[i] >= mid) {
                median = x[i];
                break;
            }
        }
    }
    // Mode calculation
    float mode = x[0];
    int maxf = f[0];
    for (int i = 1; i < n; i++) {
        if (f[i] > maxf) {
            maxf = f[i];
            mode = x[i];
        } else if (f[i] == maxf) {
            printf("\nMode: Invalid Mode");
            return 0;
        }
    }

    printf("\n");
    printf(" X     \t F    \t FX \t CF");
    for (int i = 0; i < n; i++) {
        printf("\n%.1f \t %d \t %.1f \t %d", x[i], f[i], fx[i], cf[i]);
    }
    printf("\n-------------------------------");
    printf("\nSum: \t%.1f \t %.1f", sumf, sumfx);

    printf("\n\nMean: %.2f", mean);
    printf("\nMedian: %.2f", median);
    printf("\nMode: %.2f", mode);
    return 0;
}