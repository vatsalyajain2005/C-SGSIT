# include<stdio.h>
// Even or Odd using ternary operator
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    
    (n%2==0)? printf("\n Your Number is Even: %d", n ): printf("\n Your Number is Odd: %d", n );
    
    return 0;
}