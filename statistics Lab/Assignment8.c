#include <stdio.h>

int main(){
    int n;
    printf("Enter no of Elements: ");
    scanf("%d", &n);
    int act[n], ma3[n + 1], ma5[n + 1];

    printf("Enter Actual: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &act[i]);
    }
    for (int i = 3; i <= n; i++){
        ma3[i] = ((act[i - 1] + act[i - 2] + act[i - 3]) / 3);
        if (i >= 5){
            ma5[i] = ((act[i - 1] + act[i - 2] + act[i - 3] + act[i - 4] + act[i - 5]) / 5);
        }
    }
    // Table
    printf("\n----------------------------------------------------");
    printf("\nPeriod\tActual\t\tMA3\t\tMA5");
    printf("\n----------------------------------------------------");

    for (int i = 0; i <= n; i++)
    {
        printf("\n%d", i + 1);

        if (i < n)
            printf("\t%d", act[i]);
        else
            printf("\t-");

        if (i >= 3)
            printf("\t\t%d", ma3[i]);
        else
            printf("\t\t-");

        if (i >= 5)
            printf("\t\t%d", ma5[i]);
        else
            printf("\t\t-");
    }
    printf("\n----------------------------------------------------");
    printf("\nOne Period Ahead Forecast (Period %d):\n", n + 1);
    printf("3-Period Moving Average = %d\n", ma3[n]);
    printf("5-Period Moving Average = %d\n", ma5[n]);
    return 0;
}