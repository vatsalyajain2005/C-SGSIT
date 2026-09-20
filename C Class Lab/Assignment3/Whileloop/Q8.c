// Q8. Write a program using a while loop to check whether a given number is an Armstrong number.

#include <stdio.h>
int main(){
    int n; 
    printf("Enter Number: ");
    scanf("%d",&n);
    int user = n;
    int digitSum = 0;

    
    while(n!=0){
        int digit = n%10;
        int digitCube = digit*digit*digit;
        digitSum += digitCube;
        n = n/10;
    }
    if (user == digitSum){
        printf("Your number is Armstrog");
    } else{
        printf("Your number is not Armstrog");
    }

    return 0;
}