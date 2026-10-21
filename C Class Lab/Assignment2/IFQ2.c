// Even Number- Write a program to input a number and print "Even" if the number is divisible by 2
# include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Number is an even number.");
    }
    
    return 0;
}