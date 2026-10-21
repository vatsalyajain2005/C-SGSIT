# include <stdio.h>
int main(){
    int a,b,c,n;
    printf("Enter Number: ");
    scanf("%d",&n);

    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n%10;
    n = n/10;
    int sum = a+b+c;
    printf("\n Sum of 3 digit number is : %d", sum );
    
    
    return 0;
}