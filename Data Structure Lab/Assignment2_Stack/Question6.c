/*Write a C program that uses a stack to determine whether a given string is a
palindrome or not.*/

# include<stdio.h>


int main(){
    char str[6], stack[6];
    int top = -1, reverse = 1;

    printf("Enter your String: ");
    scanf("%s",str);

    for(int i=0; str[i] != '\0'; i++){
        top++;
        stack[top] = str[i];
    }
    
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] != stack[top]){
            reverse = 0;
            break;
        }
        top--;
    }

    if (reverse == 1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}