#include <stdio.h>
 
int main()
{
    int num;
 
    printf("Enter a number: ");
    scanf("%d", &num);
 
    if (num >= 0)
    {
        if (num % 2 == 0)
        {
            printf("Positive Even\n");
        }
        else
        {
            printf("Positive Odd\n");
        }
    }
    else
    {
        printf("Negative\n");
    }
 
    return 0;
}
