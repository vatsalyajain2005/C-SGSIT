#include <stdio.h>
 
int main()
{
    char signal;
 
    printf("Enter signal color (R/Y/G): ");
    scanf("%c", &signal);
 
    switch (signal)
    {
        case 'R':
        case 'r':
            printf("Red - Stop\n");
            break;
        case 'Y':
        case 'y':
            printf("Yellow - Wait\n");
            break;
        case 'G':
        case 'g':
            printf("Green - Go\n");
            break;
        default:
            printf("Invalid signal\n");
    }
 
    return 0;
}
