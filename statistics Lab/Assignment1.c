#include <stdio.h>
// Assignment 1 - Write a program to calculate mean, median, and mode in an Individual series.
int main() {
    int n, i, j, temp;
    float sum = 0, mean;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    float arr[n];

    printf("Enter the values: ");
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    mean = sum / n;
   

    // Sorting the array for median calculation
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    float median;
    if (n % 2 == 0) {
        median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else {
        median = arr[n / 2];
    }
   

    // Mode calculation
    int mode = arr[0], maxCount = 0, count;
    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }
    
    // Table Formate 
    printf("\n\tValue\n");
    for (i = 0; i < n; i++) {
        printf("\t%.2f\n", arr[i]);
    }
     printf("\nTMean: %.2f\n", mean);
     printf("Median: %.2f\n", median);
     if (maxCount > 1) {
        printf("Mode: %d\n", mode);
    } else {
        printf("No mode found in the array.\n");
    }

    return 0;
}