#include <stdio.h>
 
int main()
{
    float attendance;
    int marks;
 
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);
 
    if (attendance >= 75)
    {
        printf("Enter marks: ");
        scanf("%d", &marks);
 
        if (marks >= 40)
        {
            printf("Eligible and Passed\n");
        }
        else
        {
            printf("Eligible but Failed\n");
        }
    }
    else
    {
        printf("Not Eligible for the exam\n");
    }
 
    return 0;
}
