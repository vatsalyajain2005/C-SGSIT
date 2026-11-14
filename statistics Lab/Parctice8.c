
#include <stdio.h>

int main() {
    int n;

    printf("Enter number of periods: ");
    scanf("%d", &n);

    float actual[n], ma3[n + 1], ma5[n + 1];

    printf("Enter actual values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &actual[i]);
    }

    // Calculate 3-period moving average
    for (int i = 3; i <= n; i++) {
        ma3[i] = (actual[i - 1] +
                  actual[i - 2] +
                  actual[i - 3]) / 3;
    }

    // Calculate 5-period moving average
    for (int i = 5; i <= n; i++) {
        ma5[i] = (actual[i - 1] +
                  actual[i - 2] +
                  actual[i - 3] +
                  actual[i - 4] +
                  actual[i - 5]) / 5;
    }

    printf("\n========== MOVING AVERAGE METHOD ==========\n");
    printf("%-10s %-10s %-15s %-15s\n",
           "Period", "Actual", "3-Period MA", "5-Period MA");
    printf("--------------------------------------------------\n");

    for (int i = 0; i <= n; i++) {
        printf("%-10d ", i + 1);

        if (i < n)
            printf("%-10.2f ", actual[i]);
        else
            printf("%-10s ", "-");

        if (i >= 3)
            printf("%-15.2f ", ma3[i]);
        else
            printf("%-15s ", "-");

        if (i >= 5)
            printf("%-15.2f", ma5[i]);
        else
            printf("%-15s", "-");

        printf("\n");
    }

    printf("\nOne Period Ahead Forecast (Period %d):\n", n + 1);
    printf("3-Period Moving Average = %.2f\n", ma3[n]);
    printf("5-Period Moving Average = %.2f\n", ma5[n]);

    return 0;
}
