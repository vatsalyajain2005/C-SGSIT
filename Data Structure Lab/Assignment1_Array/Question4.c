/*Write a C program to insert an element at a specified position in a onedimensional array.*/
#include<stdio.h>

int main(){
int n,a,element, position; 
    printf("Enter no. of values: ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<=n-1; i++){
        printf("Enter the value of arr[%d]: ", i+1);
        scanf("%d",&arr[i]); 
    }
    // for(int i=0; i<=n-1; i++){
    //     printf("position of %d array is: %d\n",i+1,arr[i]);
    // } 
    printf("Enter Element: ");
    scanf("%d",&element);
    printf("Enter Position: ");
    scanf("%d",&position);
    
    n++;

    for (int i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = element;
    
    for(int i=0; i<=n-1; i++){
        printf("position of %d array is: %d\n",i+1,arr[i]);
    }

}