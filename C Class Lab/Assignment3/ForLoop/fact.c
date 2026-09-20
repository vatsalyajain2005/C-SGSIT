#include <stdio.h>

int main(){
    int n;
    printf("Enter Value: ");
    scanf("%d",&n);
    int fact = 1;

    for (int i=1; i<=n; i++){
        fact *= i;
    }
    printf("Factotial is: %d", fact);
    return 0;
}