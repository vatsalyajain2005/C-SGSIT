#include <stdio.h>
 
int main()
{
    int num;
 
    printf("Enter a number: ");
    scanf("%d", &num);
 
    if (num >= 1 && num <= 10)
    {
        printf("Small\n");
    }
    else if (num <= 50)
    {
        printf("Medium\n");
    }
    else if (num <= 100)
    {
        printf("Large\n");
    }
    else
    {
        printf("Very Large\n");
    }
 
    return 0;
}
