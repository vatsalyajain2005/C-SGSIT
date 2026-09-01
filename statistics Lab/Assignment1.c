#include <stdio.h>
// Assignment 1 - Write a program to calculate mean, median, and mode in an Individual series.
int main() {
    int n, i, j, temp;
    float sum = 0, mean;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter the value of arr[%d]: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    mean = sum / n;
    printf("The Mean of the array is: %f\n", mean);

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
    printf("The Median of the array is: %f\n", median);

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
    
    if (maxCount > 1) {
        printf("The Mode of the array is: %d\n", mode);
    } else {
        printf("No mode found in the array.\n");
    }

    return 0;
}