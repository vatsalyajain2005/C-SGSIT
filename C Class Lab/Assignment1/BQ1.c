// Write a C program to find the result of bitwise AND of two numbers.
# include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = num1 & num2;
    printf("The result of bitwise AND of %d and %d is: %d\n", num1, num2, result);

    return 0;
}