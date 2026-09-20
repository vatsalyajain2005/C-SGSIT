// Q4.Write a program using a while loop to count the number of digits in a given number.

#include <stdio.h>
int main(){
    int n; 
    printf("Enter Number: ");
    scanf("%d",&n);
    int count = 0;
    
    while(n!=0){
        int digit = n%10;
        // printf("%d\n",digit);
        count++;
        n = n/10;
    }
    printf("Total Number is: %d", count);

    return 0;
}