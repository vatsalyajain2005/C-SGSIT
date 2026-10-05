/*Write a C program to find the GCD (Greatest Common Divisor) of two numbers using recursion.*/

# include <stdio.h>
int GCD(int a, int b){
    if (b==0){
        return a;
    } else{
        return GCD (b,a % b);
    }
}

int main(){
    int a,b;
    printf("Enter a and b: ");
    scanf("%d %d", &a,&b);

    printf("GCD: %d",GCD(a,b));
    return 0;
}