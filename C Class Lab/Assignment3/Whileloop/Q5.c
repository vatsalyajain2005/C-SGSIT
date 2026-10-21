// Q5. Write a program using a while loop to find the sum of digits of a number.

#include <stdio.h>
int main(){
    int n; 
    printf("Enter Number: ");
    scanf("%d",&n);
    int sum = 0;
    
    while(n!=0){
        int digit = n%10;
        sum += digit; 
        n = n/10;
    }
    printf("Sum is: %d", sum);

    return 0;
}