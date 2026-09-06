# include <stdio.h>
// Eligible for voting or not
int main(){
    int age;
    printf("Enter Age: ");
    scanf("%d",&age);
    
    (age>=18)? printf("\n You are Eligible for Voting: %d", age ): printf("\n You are Not Eligible for Voting: %d", age );
    
    return 0;
}