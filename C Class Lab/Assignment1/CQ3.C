# include <stdio.h>
int main(){
    int a,b;
    printf("Enter A and B: ");
    scanf("%d %d", &a, &b);
    
    (a<b)? printf("\n A is smallest: %d", a ): printf("\n B is smallest: %d", b );
    
    return 0;
}