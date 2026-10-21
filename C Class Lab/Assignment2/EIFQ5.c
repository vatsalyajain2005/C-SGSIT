#include <stdio.h>
 
int main()
{
    int units;
 
    printf("Enter units consumed: ");
    scanf("%d", &units);
 
    if (units <= 100)
    {
        printf("Low usage\n");
    }
    else if (units <= 200)
    {
        printf("Medium usage\n");
    }
    else if (units <= 300)
    {
        printf("High usage\n");
    }
    else
    {
        printf("Very high usage\n");
    }
 
    return 0;
}
