// Q4.Write a program using a for loop to calculate the sum of numbers from 1 to N.

#include <stdio.h>

int main(){
    int n;
    printf("Enter Value: ");
    scanf("%d",&n);
    int sum = 0;

    for (int i=1; i<=n; i++){
        sum += i;
    }
    printf("Sum is: %d", sum);
    return 0;
}