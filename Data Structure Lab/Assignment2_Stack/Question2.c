/*Write a C program that uses a stack to determine whether the parentheses in
a given arithmetic expression are balanced. The program should display
whether the expression is balanced or not balanced.
*/

#include <stdio.h>

#define MAX 100

int main() {
    char exp[MAX];
    char stack[MAX];
    int top = -1;
    int balanced = 1;

    printf("Enter an arithmetic expression: ");
    scanf("%s", exp);

    for (int i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == '(') {
            top++;
            stack[top] = '(';
        }
        else if (exp[i] == ')') {
            top--;
        }
    }

    if (top != -1) {
        balanced = 0;
    }

    if (balanced == 1) {
        printf("Expression is Balanced.\n");
    } else {
        printf("Expression is Not Balanced.\n");
    }

    return 0;
}