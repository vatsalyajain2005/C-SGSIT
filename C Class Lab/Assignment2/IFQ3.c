// Divisible by 5- Write a program to input a number and print "Divisible by 5" if it is divisible by 5.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0) {
        printf("Number is divisible by 5.");
    }

    return 0;
}