# include <stdio.h>
int main(){
    int a, b;
    printf("Enter A and B: ");
    scanf("%d %d", &a, &b);
    
    printf("\nSum is: %d", a+b );
    printf("\nSub is: %d", a-b );
    printf("\nMulti is: %d", a*b ); 
    printf("\nDiv is: %d", a/b );
    return 0;


}