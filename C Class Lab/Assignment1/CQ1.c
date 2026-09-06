# include<stdio.h>
// Largest of two numbers
int main(){
    int a,b;
    printf("Enter A and B: ");
    scanf("%d %d", &a, &b);
    
    if(a>b){
        printf("\n A is largest: %d", a );
    }
    else{
        printf("\n B is largest: %d", b );
    }
    
    return 0;
}