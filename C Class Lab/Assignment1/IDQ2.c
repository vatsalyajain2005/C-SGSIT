// Write a program to demonstrate pre-decrement and post-decrement.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int pre_decrement = --num; 
    int post_decrement = num--; 

    printf("After pre-decrement, the value is: %d\n", pre_decrement);
    printf("After post-decrement, the value is: %d\n", post_decrement);
    printf("The final value of num is: %d\n", num);

    return 0;
}