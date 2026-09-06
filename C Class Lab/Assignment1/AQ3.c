# include <stdio.h>
int main(){
    float P,R,T;
    printf("Enter Principle: ");
    scanf("%f",&P);
    printf("Enter Rate: ");
    scanf("%f",&R);
    printf("Enter Time: ");
    scanf("%f",&T);

    float SI = (P*R*T)/100;
    printf("\n SImple Intrest is: %.2f", SI );
    
    
    return 0;
}