// Write a program to find the largest of three numbers using nested conditional operators.in ternory opretors
# include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter A, B and C: ");
    scanf("%d %d %d", &a, &b, &c);
    
    (a>b)? (a>c? printf("\n A is largest: %d", a): printf("\n C is largest: %d", c)): (b>c? printf("\n B is largest: %d", b): printf("\n C is largest: %d", c));
    
    return 0;
}