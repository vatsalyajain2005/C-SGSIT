// Write a program to check whether a number lies between 10 and 50.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 10 && num < 50) {
        printf("%d lies between 10 and 50.\n", num);
    } else {
        printf("%d does not lie between 10 and 50.\n", num);
    }

    return 0;
}