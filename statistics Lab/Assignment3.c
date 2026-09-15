#include<stdio.h>
// Assignment 3 - Write a program to calculate mean, median, and mode in a Continuous series.
int main() {
    // Taking input for number of elements in the array
    int n, avg, i; 
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int x[n],f[n],li[n],ui[n];

    // Continuous Direct Series Mean Calculation
    for (int i=0; i<n;i++){
        printf("Enter the X%d first interval: ", i + 1);
        scanf("%d",&li[i]);
        printf("Enter the X%d second interval: ", i + 1);
        scanf("%d",&ui[i]);

        avg = (li[i]+ui[i])/2;
        x[i] = avg;
    }
    printf("\nEnter Frequency\n");
    for (int i=0; i<=n-1;i++){
        printf("Enter the value of F[%d]: ", i + 1);
        scanf("%d", &f[i]);
    }

    // ---------Mean------------

    float sumf=0, sumfx=0;
    int fx[n];
    for (int i=0; i<=n-1;i++){
         sumf += f[i];
         fx[i] = x[i]*f[i];
         sumfx += fx[i];
    }
    float mean  = sumfx/sumf;

    printf("\n---------------- MEAN ----------------");
    printf("\nSum of Frequency is: %.2f",sumf);
    printf("\nSum of fx is: %.2f",sumfx);
    printf("\nMean is: %.2f",mean);

    // ---------Median-----------
    
    int cf[n];
    cf[0] = f[0];
    int medianClass = 0;
    float lowerlimit, fre, c,N;
    for (int i=1; i<=n-1;i++){
        cf[i] = cf[i -1] + f[i];
        N = cf[i];
    }
    for (int i=0; i<=n-1;i++){
        if ((N/2) <= cf[i] ){
            medianClass = i;
            break;
        }
    }   
    lowerlimit = li[medianClass];
    fre = f[medianClass];
    i = ui[medianClass] - li[medianClass];
    c = cf[medianClass - 1];

    float median = lowerlimit + ((N/2.0 - c)/fre)*i;

    printf("\n---------------- Median ----------------");
    printf("\nMedian Class: %d-%d  Frequency: %.2f", li[medianClass], ui[medianClass],fre);
    printf("\nPrevious CF: %.2f", c);
    printf("\nMedian is: %.2f",median);

    // ---------Mode-----------  
    int maxf = f[0], modeclass = 0; 
    float f1, f2, f0, l1, mode;
    for (int i=0; i<=n-1;i++){
       if (maxf < f[i]){
            maxf = f[i];
            modeclass = i;
       }
    }
    l1 = li[modeclass];
    f0 = f[modeclass - 1];
    f1 = f[modeclass];
    f2 = f[modeclass + 1];
    int interval = ui[modeclass] - li[modeclass] ;
    
    mode = l1 + ((f1-f0)/(2*f1-f0-f2))*interval;

    printf("\n---------------- MEAN ----------------");
    printf("\nMode Class: %d-%d", li[modeclass], ui[modeclass]);
    printf("\nF0: %.1f, F1: %.1f, F2: %.1f", f0,f1,f2);
    printf("\nMode is: %.2f",mode);
    

    printf("\n\n---------------- TABLE ----------------\n");
    printf("X     | F    | FX    |CF ");
    for (int i=0; i<n; i++){
        printf("\n");
        printf("%d-%d",li[i],ui[i]);
        printf("    ");
        printf("%d",f[i]);
        printf("    ");
        printf("%d",fx[i]);
        printf("    ");
        printf("%d",cf[i]);
    }

    return 0;
}   