// Positive and Even- Write a program to check whether a number is positive and even using if.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0 && num % 2 == 0) {
        printf("Number is positive and even.");
    }

    return 0;
}