#include <stdio.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push
void push(char ch) {
    top++;
    stack[top] = ch;
}

// Pop
char pop() {
    char ch = stack[top];
    top--;
    return ch;
}

// Check precedence
int precedence(char ch) {
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}

int main() {
    char infix[MAX], postfix[MAX];
    int i, j = 0;
    char ch;

    printf("Enter an infix expression: ");
    scanf("%s", infix);

    for (i = 0; infix[i] != '\0'; i++) {

        ch = infix[i];

        // Check whether character is an operand
        if ((ch >= 'A' && ch <= 'Z') ||
            (ch >= 'a' && ch <= 'z') ||
            (ch >= '0' && ch <= '9')) {

            postfix[j] = ch;
            j++;
        }

        // Opening parenthesis
        else if (ch == '(') {
            push(ch);
        }

        // Closing parenthesis
        else if (ch == ')') {

            while (top != -1 && stack[top] != '(') {
                postfix[j] = pop();
                j++;
            }

            // Remove '('
            if (top != -1) {
                pop();
            }
        }

        // Operator
        else {

            while (top != -1 &&
                   stack[top] != '(' &&
                   precedence(stack[top]) >= precedence(ch)) {

                postfix[j] = pop();
                j++;
            }

            push(ch);
        }
    }

    // Pop remaining operators
    while (top != -1) {
        postfix[j] = pop();
        j++;
    }

    postfix[j] = '\0';

    printf("Postfix expression: %s\n", postfix);

    return 0;
}