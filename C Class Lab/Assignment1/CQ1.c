// Write a program to find the largest of two numbers using the conditional operator.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter A and B: ");
    scanf("%d %d", &a, &b);
    
    (a>b)? printf("\n A is largest: %d", a): printf("\n B is largest: %d", b);
    return 0;
}