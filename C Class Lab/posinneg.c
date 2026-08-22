#include<stdio.h>

int main(){
    int n;
    printf("Enter Value: ");
    scanf("%d",&n);

    if(n>0){
        printf("Your number is Positive");
    } else {
        printf("Your number is Negetive");
    }
    
    return 0;
}