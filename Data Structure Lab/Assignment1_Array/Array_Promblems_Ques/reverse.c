#include<stdio.h>

int main(){
    
    int n;
    printf("Enter no. of values: ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0; i<=n-1; i++){
        printf("Enter the value of arr[%d]: ", i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=n; i>=0; i--){
        printf("position of %d array is: %d\n",i+1,arr[i]);
    }
    
    return 0;
}