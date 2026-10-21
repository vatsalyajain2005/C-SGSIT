#include <stdio.h>

// Recursive function to get the nth term
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, sum=0;
    printf("Enter the num: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
        sum += fibonacci(i);
    }
    printf("\nSum: %d",sum);
    return 0;
}