// Q.1  Write a program that will perform following functions using stack and arrays:
// 1.	Read an array A of n integers (to be read from the terminal and store in A). 
// 2.	Declare an integer stack. 
// 3.	Read the elements of the array A one by one and Push onto stack only if the numbers are even otherwise discard the numbers. 
// 4.	If numbers are odd then print the following : “number is odd”.
// 5.	Once all the elements are checked, Pop elements from stack and Print.
// 6.	Print original array A of integers also.
// Example Input and Output required:
// Input:      Enter value of n:   5
//                  Enter numbers in array A:   3,  21,  4,   12,   1
// Output:   Total integers in the array:   5
//                  3 is odd number
//                  21 is odd number
//                  4  is even  number
//                  12 is even number
//                  1 is odd number
//                  Stack Output:     4,     12 
//                  Original Array:    3,  21,  4,   12,   1       

#include <stdio.h>

int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int a[n];
    int stack[n];
    int top = -1;

    for (int i = 0; i < n; i++) {
        printf("Enter Element [%d]: ",i+1);
        scanf("%d", &a[i]);
    }

    printf("\nTotal integers in the array: %d\n", n);

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d is even number\n", a[i]);
            top++;
            stack[top] = a[i];
        }
        else {
            printf("%d is odd number\n", a[i]);
        }
    }

    printf("\nStack Output: ");
    while (top >= 0) {
        printf("%d ", stack[top]);
        top--;
    }

    printf("\nOriginal Array: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}