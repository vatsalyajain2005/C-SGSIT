// Write a program to demonstrate all compound assignment operators.
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nInitial values: a = %d, b = %d\n", a, b);

    a += b; // Addition assignment
    printf("After a += b: a = %d\n", a);

    a -= b; // Subtraction assignment
    printf("After a -= b: a = %d\n", a);

    a *= b; // Multiplication assignment
    printf("After a *= b: a = %d\n", a);

    if (b != 0) {
        a /= b; // Division assignment
        printf("After a /= b: a = %d\n", a);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    if (b != 0) {
        a %= b; // Modulus assignment
        printf("After a %%= b: a = %d\n", a);
    } else {
        printf("Modulus by zero is not allowed.\n");
    }

    return 0;
}