// Write a program to divide a number by 2 using the right shift operator.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = num >> 1; 

    printf("The result of dividing %d by 2 using right shift is: %d\n", num, result);

    return 0;
}