//Write a program to calculate one period ahead forecast using Naïve method.
#include<stdio.h>

int main(){
    int n;
    printf("Enter no. of Elements: ");
    scanf("%d",&n);
    int year[n], arr[n], forecast[n];
    printf("Enter Years:\n");
    for(int i=0; i<n;i++){
        scanf("%d",&year[i]);
    }
    printf("Enter Sales:\n");
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n;i++){
        forecast[i] = arr[i-1];
    }
    printf("\nYear\tActual\t\tForecast\n");

for(int i=0; i<n; i++){
    if(i == 0){
        printf("%d\t%d\t\t0\n", year[i], arr[i]);
    }
    else{
        printf("%d\t%d\t\t%d\n", year[i], arr[i], forecast[i]);
    }
}

    printf("\nForecast for %d: %d", year[n-1]+1, arr[n-1]);
    return 0;
}