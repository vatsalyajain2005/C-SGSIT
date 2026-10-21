// Q6. Write a program using a while loop to reverse a given number.

#include <stdio.h>
int main(){
    int n; 
    printf("Enter Number: ");
    scanf("%d",&n);
    int reverse = 0;
    
    while(n!=0){
        int digit = n%10;
        reverse = reverse*10 + digit;
        n = n/10;
    }
    printf("Reverse is: %d", reverse);

    return 0;
}