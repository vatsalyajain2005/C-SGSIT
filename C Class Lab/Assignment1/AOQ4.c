// Write a program to calculate the final value of a variable after applying +=, -=, *=, and /=.
# include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    num += 10; // Increase by 10
    printf("After += 10: %d\n", num);

    num -= 5; // Decrease by 5
    printf("After -= 5: %d\n", num);

    num *= 2; // Multiply by 2
    printf("After *= 2: %d\n", num);

    if (num != 0) {
        num /= 3; // Divide by 3
        printf("After /= 3: %d\n", num);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}