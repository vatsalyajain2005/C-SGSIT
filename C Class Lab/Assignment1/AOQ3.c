// Write a program that decreases a number by 5 using -=.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    num -= 5; 

    printf("The number after increasing by 5 is: %d\n", num);

    return 0;
}