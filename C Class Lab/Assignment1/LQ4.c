// Write a program to check whether a number is positive and even.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0 ) {
        if (num % 2 == 0) {
            printf("%d is a positive and even number.\n", num);
        } else {
            printf("%d is a positive but not an even number.\n", num);
        }
    } else {
        printf("%d is not a positive number.\n", num);
    }

    return 0;
}