/*Write a C program to find Factorial of a given number using recursion. */

# include<stdio.h>

int fact(int n){
     
    if (n == 1|| n == 0){
        return 1;
    }
    else{
       return n * fact(n-1);
    }
    
}

int main(){
    int n;
    printf("Enter Value: ");
    scanf("%d",&n);

    printf("Fact: %d", fact(n));
}