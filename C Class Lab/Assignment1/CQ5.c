# include<stdio.h>
// Largest of 3 numbers using nested if else
int main(){
    int a,b,c;
    printf("Enter A, B and C: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a>b){
        if(a>c){
            printf("\n A is largest: %d", a );
        }
        else{
            printf("\n C is largest: %d", c );
        }
    }
    else{
        if(b>c){
            printf("\n B is largest: %d", b );
        }
        else{
            printf("\n C is largest: %d", c );
        }
    }
    
    return 0;
}