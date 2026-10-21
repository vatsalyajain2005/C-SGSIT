/* Write a C program to read N elements into an array and calculate:
(i) Sum of all the elements.
(ii) Average of all the elements.*/ 

#include<stdio.h>

int main(){
    
    int n, sum=0, avg;
    printf("Enter no. of values: ");
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