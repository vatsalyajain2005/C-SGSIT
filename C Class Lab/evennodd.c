#include<stdio.h>

int main(){
    int n;
    printf("Enter Value: ");
    scanf("%d",&n);

    if(n%2==0){
        printf("Your number is Even");
    } else {
        printf("Your number is Odd");
    }
    
    return 0;
}