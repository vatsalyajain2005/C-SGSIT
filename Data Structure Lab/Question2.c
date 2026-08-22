#include<stdio.h>

int main(){
    
    int n, sum=0, avg;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0; i<=n-1; i++){
        printf("Enter the value of arr[%d]: ", i+1);
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }

    avg = sum/n;
    
    printf("The Sum of the array is: %d\n",sum);
    printf("The Average of the array is: %d",avg);
    return 0;
}