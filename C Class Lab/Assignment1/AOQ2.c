// Write a program that increases a number by 10 using +=.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    num += 10; 

    printf("The number after increasing by 10 is: %d\n", num);

    return 0;
}