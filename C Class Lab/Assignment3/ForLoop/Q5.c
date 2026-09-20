// Write a program using a for loop to print the multiplication table of a number entered by the user.
#include <stdio.h>

int main(){
    int n;
    printf("Enter Value: ");
    scanf("%d",&n);
    printf("------Table of %d------\n",n);
    for (int i=1; i<=10; i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}