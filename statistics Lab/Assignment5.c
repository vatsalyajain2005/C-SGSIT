#include <stdio.h>
#include <math.h>
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

    // ---------Mean Deviation------------

    float meanMinus[n], fmeanMinus[n], sumfmean=0;
    float MD;
    for (int i=0; i<=n-1;i++){
        meanMinus[i] = fabs(x[i] - mean);
        fmeanMinus[i] = f[i] * meanMinus[i];
        sumfmean += fmeanMinus[i];//
    }
    MD = sumfmean/sumf;
    
    printf("\n---------------- MEAN ----------------");
    printf("\nMeanDeviation: %.2f", MD);

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

    //----------Mean Median-------------- 
    float medianMinus[n], fmedianMinus[n], sumfmedian=0;
    float MedianDeviation;
    for (int i=0; i<=n-1;i++){
        medianMinus[i] = fabs(x[i] - median);
        fmedianMinus[i] = f[i] * medianMinus[i];
        sumfmedian += fmedianMinus[i];//
    }
    MedianDeviation = sumfmedian/sumf;

    printf("\n---------------- Median ----------------");
    printf("\nMedian Deviation: %.2f", MedianDeviation);

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

    //----------Mean Median-------------- 
    float modeMinus[n], fmodeMinus[n], sumfmode=0;
    float modeDeviation;
    for (int i=0; i<=n-1;i++){
        modeMinus[i] = fabs(x[i] - mode);
        fmodeMinus[i] = f[i] * modeMinus[i];
        sumfmode += fmodeMinus[i];
    }
    modeDeviation = sumfmode/sumf;

    printf("\n---------------- MODE ----------------");
    printf("\nMode Deviation: %.2f", modeDeviation);


    printf("\n\n---------------- TABLE ----------------\n");
    // Print the table header with line proper formatting
    printf("X\tF\tCF\t|X-Mean|\tF|X-Mean|\t|X-Median|\tF|X-Median|\t|X-Mode|\tF|X-Mode|\n");
    for (int i=0; i<n; i++) {
        printf("%d | \t%d\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", 
               x[i], f[i], cf[i], meanMinus[i], fmeanMinus[i], 
               medianMinus[i], fmedianMinus[i], modeMinus[i], fmodeMinus[i]);
    }

    return 0;
}   