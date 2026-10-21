#include <stdio.h>
 
int main()
{
    float temp;
 
    printf("Enter temperature (in C): ");
    scanf("%f", &temp);
 
    if (temp > 40)
    {
        printf("Very Hot\n");
    }
    else if (temp >= 30)
    {
        printf("Hot\n");
    }
    else if (temp >= 20)
    {
        printf("Normal\n");
    }
    else if (temp >= 10)
    {
        printf("Cold\n");
    }
    else
    {
        printf("Very Cold\n");
    }
 
    return 0;
}
