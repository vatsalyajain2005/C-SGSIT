// Q7. Write a program using a while loop to check whether a number is a palindrome.

#include <stdio.h>
int main(){
    int n; 
    printf("Enter Number: ");
    scanf("%d",&n);
    int user = n;
    int reverse = 0;
    
    while(n!=0){
        int digit = n%10;
        reverse = reverse*10 + digit;
        n = n/10;
    }
    if (user == reverse){
        printf("Your number is palindrome");
    } else{
        printf("Your number is not palindrome");
    }

    return 0;
}