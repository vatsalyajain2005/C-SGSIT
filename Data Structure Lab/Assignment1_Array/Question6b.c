/*Write a menu driven C program to search and display a given element in a onedimensional array 
    using the Linear Search technique.*/

#include<stdio.h>
int main(){
    int n,a;
    printf("Enter the value: ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("Enter the value of a[%d]: ", i+1);
        scanf("%d", &arr[i]);
    }
    int choice;
    while (choice!=3)
    {   
        printf("\n");
        printf("--------Menu--------\n");
        printf("1. Search an element of the Array\n");
        printf("2. Display all element of the Array\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
        case 1:
        
            printf("Enter Position you want to Search: ");
            scanf("%d",&a);
            printf("Positon of %d element is: %d", a, arr[a-1]);
            break;
        case 2:
            for(int i=0; i<n; i++){
                printf("position of %d array is: %d\n",i+1,arr[i]);
            }
            break;
        
        default:
            break;
        }
    
    }
    
}