#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter number of months: ");
    scanf("%d", &n);

    char *month[] = {
        "Jan", "Feb", "March", "April", "May",
        "June", "July", "August", "Sept", "Oct",
        "Nov", "Dec"
    };

    float actual[n], forecast[n + 1], error[n], pe[n], ape[n];
    float alpha, initialForecast;
    float sumPE = 0, sumAPE = 0;
    float MPE, MAPE;

    printf("Enter smoothing constant alpha (0 to 1): ");
    scanf("%f", &alpha);

    printf("Enter initial forecast: ");
    scanf("%f", &initialForecast);

    printf("Enter actual demand for each month:\n");

    for (int i = 0; i < n; i++) {
        printf("%s: ", month[i]);
        scanf("%f", &actual[i]);

        if (actual[i] == 0) {
            printf("Actual value cannot be zero for PE calculation.\n");
            return 0;
        }
    }

    forecast[0] = initialForecast;
    for (int i = 1; i < n; i++) {
        forecast[i] = forecast[i - 1]
                    + alpha * (actual[i - 1] - forecast[i - 1]);
    }
    for (int i = 0; i < n; i++) {
        error[i] = actual[i] - forecast[i];
        pe[i] = (error[i] / actual[i]) * 100;
        ape[i] = fabs(pe[i]);
        sumPE += pe[i];
        sumAPE += ape[i];
    }

    forecast[n] = forecast[n - 1]
                + alpha * (actual[n - 1] - forecast[n - 1]);

    MPE = sumPE / n;
    MAPE = sumAPE / n;
    printf("\n---------------------------------------------------------------");
    printf("\nMonth\tActual\tForecast\tError\tPE(%%)\tAPE(%%)");
    printf("\n---------------------------------------------------------------");
    for (int i = 0; i < n; i++) {
        printf("\n%-8s", month[i]);
        printf("%.2f\t\t", actual[i]);
        printf("%.2f\t\t", forecast[i]);
        printf("%.2f\t\t", error[i]);
        printf("%.2f\t", pe[i]);
        printf("%.2f", ape[i]);
    }

    printf("\n---------------------------------------------------------------");
    printf("\n\nMean Percentage Error (MPE) = %.4f%%", MPE);
    printf("\nMean Absolute Percentage Error (MAPE) = %.4f%%", MAPE);
    printf("\n\nForecast for next month (%s) = %.2f",
           month[n % 12], forecast[n]);
    printf("\n");
    return 1;
}
