#include<stdio.h>

int main(){
    
    int n, sum=0;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0; i<=n-1; i++){
        printf("Enter the value of arr[%d]: ", i+1);
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    // for(int i=0; i<=n-1; i++){
    //     printf("%d",arr[i]);
    // }
    // for(int i=0; i<=n; i++){
    //   sum = sum + arr[i];  
    // }
        int mean = (sum/n);
    
    printf("The mean of the array is: %d",mean);
    return 0;
}