// Write a program to input a student&#39;s marks and check whether the student has passed or failed.
#include <stdio.h>

int main() {
    int marks;
    printf("Enter the student's marks: ");
    scanf("%d", &marks);

    if (marks >= 40) {
        printf("The student has passed.\n");
    } else {
        printf("The student has failed.\n");
    }

    return 0;
}