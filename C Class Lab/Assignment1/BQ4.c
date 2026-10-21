// Write a program to multiply a number by 2 using the left shift operator.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = num << 1; 

    printf("The result of multiplying %d by 2 using left shift is: %d\n", num, result);

    return 0;
}