// Write a program to demonstrate pre-increment and post-increment.
#inclde <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int pre_increment = ++num; 
    int post_increment = num++; 

    printf("After pre-increment, the value is: %d\n", pre_increment);
    printf("After post-increment, the value is: %d\n", post_increment);
    printf("The final value of num is: %d\n", num);

    return 0;
}