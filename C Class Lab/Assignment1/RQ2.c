// Write a program to check whether a number is equal to zero, positive, or negative.
# include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter a numbers: ");
    scanf("%d", &num1);

    if (num1 > 0) {
        printf("%d is a positive number.\n", num1);
    } else if (num1 < 0) {
        printf("%d is not a positive number.\n", num1);
    } else {
        printf("%d is zero.\n", num1);
    }

    return 0;
}