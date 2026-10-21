// Salary Check-Write a program to input salary and print "High Salary" if salary is greater than ₹50,000.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 50000) {
        printf("High Salary");
    }

    return 0;
}