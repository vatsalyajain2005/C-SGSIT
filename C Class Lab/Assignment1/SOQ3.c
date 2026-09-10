// Write a program to use the comma operator and find the final value of a variable.
#include <stdio.h>
int main() {
    int num = 10;
    num = (num += 5, num *= 2, num - 3); 

    printf("The final value of num is: %d\n", num);

    return 0;
}