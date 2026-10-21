#include <stdio.h>
 
int main()
{
    int category, choice;
    float a, b;
 
    printf("1. Arithmetic\n");
    printf("2. Relational\n");
    printf("Choose a category: ");
    scanf("%d", &category);
 
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
 
    switch (category)
    {
        case 1:
            printf("1. Addition\n");
            printf("2. Subtraction\n");
            printf("3. Multiplication\n");
            printf("4. Division\n");
            printf("Choose operation: ");
            scanf("%d", &choice);
 
            switch (choice)
            {
                case 1:
                    printf("Result = %.2f\n", a + b);
                    break;
                case 2:
                    printf("Result = %.2f\n", a - b);
                    break;
                case 3:
                    printf("Result = %.2f\n", a * b);
                    break;
                case 4:
                    if (b != 0)
                    {
                        printf("Result = %.2f\n", a / b);
                    }
                    else
                    {
                        printf("Division by zero is not possible\n");
                    }
                    break;
                default:
                    printf("Invalid operation\n");
            }
            break;
 
        case 2:
            printf("1. Greater\n");
            printf("2. Smaller\n");
            printf("Choose operation: ");
            scanf("%d", &choice);
 
            switch (choice)
            {
                case 1:
                    if (a > b)
                        printf("%.2f is greater\n", a);
                    else
                        printf("%.2f is greater\n", b);
                    break;
                case 2:
                    if (a < b)
                        printf("%.2f is smaller\n", a);
                    else
                        printf("%.2f is smaller\n", b);
                    break;
                default:
                    printf("Invalid operation\n");
            }
            break;
 
        default:
            printf("Invalid category\n");
    }
 
    return 0;
}
