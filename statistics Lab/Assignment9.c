#include <stdio.h>

int main() {
    int n, cast;
    float alpha;

    printf("Enter No. of Elements: ");
    scanf("%d", &n);

    printf("Enter Smoothing Constant (0-1): ");
    if (scanf("%f", &alpha) != 1 || alpha < 0 || alpha > 1) {
        printf("Alpha must be between 0 and 1.\n");
        return 1;
    }

    int act[n];
    float forecast[n], Error[n], sqError[n];
    float meanError, meanSqError, summeanError = 0, summeanSqError = 0;
    printf("Enter Actual values: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &act[i]);
    }
    printf("Enter Initial Forecast: ");
    scanf("%d", &cast);
    forecast[0] = cast;
    for (int i=1; i<=n; i++) {
        forecast[i] = (alpha * act[i - 1]) + ((1 - alpha) * forecast[i - 1]);
    }
    for (int i=1; i<n; i++) {
        Error[i] = act[i] - forecast[i];
        sqError[i] = Error[i]*Error[i];
        summeanError += Error[i];
        summeanSqError += sqError[i];
    }
    meanError = summeanError / (n - 1);
    meanSqError = summeanSqError / (n - 1);

    // Table
    printf("--------------------------------------------------------------------------------");
    printf("\nPeriod\tActual\t\tForecast\tError\tError^2");
    printf("\n--------------------------------------------------------------------------------");

    for (int i = 0; i <= n; i++) {
        printf("\n%d", i+1);
        if (i < n) printf("\t%d", act[i]);
        else printf("\t-");

        printf("\t\t%.2f", forecast[i]);

        if (i >= 1 && i < n){
            printf("\t\t\t%.2f\t\t%.2f",Error[i],sqError[i]);
        } else {
            printf("\t\t\t-\t\t-");
        }
    }
    printf("\n--------------------------------------------------------------------------------");

    printf("\nMean Error: %.2f", meanError);
    printf("\nMean Squre Error: %.2f", meanSqError);
    return 0;
}