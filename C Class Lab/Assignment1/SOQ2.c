// Write a program to find the size of int, float, char, and double using sizeof.
#include <stdio.h>
int main() {
    int num;
    float fnum;
    char ch;
    double dnum;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a float number: ");
    scanf("%f", &fnum);
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("Enter a double number: ");
    scanf("%lf", &dnum);

    printf("The size of int is: %zu bytes\n", sizeof(num));
    printf("The size of float is: %zu bytes\n", sizeof(fnum));
    printf("The size of char is: %zu bytes\n", sizeof(ch));
    printf("The size of double is: %zu bytes\n", sizeof(dnum));

    return 0;
}
   