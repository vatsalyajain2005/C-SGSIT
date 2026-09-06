/*Write a C program to insert an element at a specified position in a onedimensional array.*/
#include<stdio.h>

int main(){
int n,a; 
    printf("Enter no. of values: ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0; i<=n-1; i++){
        printf("Enter the value of arr[%d]: ", i+1);
        scanf("%d",&arr[i]);
        
    }
    printf("Enter the position of the array you want to Print: ");
    scanf("%d",&a);
    printf("Array %d element is: %d", a,arr[a-1]);
    
}