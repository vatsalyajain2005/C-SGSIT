// Important special operators in C include sizeof, comma.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The size of the number is: %zu bytes\n", sizeof(num));

    return 0;
}