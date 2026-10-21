// Q3.Write a program using a while loop to calculate the sum of all even numbers from 1 to N.

#include <stdio.h>
int main(){
    int n; 
    printf("Enter Number: ");
    scanf("%d",&n);
    int sum = 0;
    int i = 1;
    while(i<=n){
        if (i%2==0){
            sum += i;
        }
        i++;
    }
    printf("Sum is %d:",sum);
}