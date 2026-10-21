/*Write a C program that uses a stack to reverse a given string and display the
reversed string.
*/

# include<stdio.h>

int main(){
    char str[5], stack[5];
    int top = -1;

    printf("Enter your String: ");
    scanf("%s",str);

    for(int i=0; str[i] != '\0'; i++){
        top++;
        stack[top] = str[i];
    }
    printf("Reverse: ");
    for (int j=top; j>=0; j--){
        printf("%c", stack[j]);
    }

    return 0;
}