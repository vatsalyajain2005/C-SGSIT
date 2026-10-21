#include <stdio.h>

int main(){
    int n;
    printf("Enter Value: ");
    scanf("%d",&n);
    int count = 0;

    for (int i=1; i<=n; i++){
        if (i%5 == 0){
            printf("%d ", i);
            count ++;
        }
    }
    printf("\nTotal Number is: %d", count);
    return 0;
}