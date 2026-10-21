// Write a program to demonstrate AND, OR, and XOR operators.
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int and_result = num1 & num2;
    int or_result = num1 | num2;
    int xor_result = num1 ^ num2;

    printf("The result of bitwise AND of %d and %d is: %d\n", num1, num2, and_result);
    printf("The result of bitwise OR of %d and %d is: %d\n", num1, num2, or_result);
    printf("The result of bitwise XOR of %d and %d is: %d\n", num1, num2, xor_result);

    return 0;
}