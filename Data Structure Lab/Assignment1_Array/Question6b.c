/*Write a menu driven C program to search and display a given element in a onedimensional array 
    using the Linear Search technique.*/

#include<stdio.h>
int main(){
    // int n,a;
    // printf("Enter the value: ");
    // scanf("%d",&n);
    // int arr[n];
    
    // for(int i=0;i<n;i++){
    //     printf("Enter the value of a[%d]: ", i+1);
    //     scanf("%d", &arr[i]);
    // }
    // int choice;
    // while (choice!=3)
    // {   
    //     printf("\n");
    //     printf("--------Menu--------\n");
    //     printf("1. Search an element of the Array\n");
    //     printf("2. Display all element of the Array\n");
    //     printf("3. Exit\n");
    //     printf("Enter your choice: ");
    //     scanf("%d", &choice);
        
    //     switch (choice)
    //     {
    //     case 1:
        
    //         printf("Enter Position you want to Search: ");
    //         scanf("%d",&a);
    //         printf("Positon of %d element is: %d", a, arr[a-1]);
    //         break;
    //     case 2:
    //         for(int i=0; i<n; i++){
    //             printf("position of %d array is: %d\n",i+1,arr[i]);
    //         }
    //         break;
        
    //     default:
    //         break;
    //     }
    
    // }
    int arr[50], n, i, elem, choice, found;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\nMenu:\n");
        printf("1. Search for an element\n");
        printf("2. Display all elements\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter element to search: ");
                scanf("%d", &elem);
                found = 0;
                for(i = 0; i < n; i++) {
                    if(arr[i] == elem) {
                        printf("Element %d found at position %d\n", elem, i+1);
                        found = 1;
                    }
                }
                if(!found)
                    printf("Element %d not found in array\n", elem);
                break;

            case 2:
                printf("Array elements are:\n");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 3);

    return 0;
}