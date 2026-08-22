#include<stdio.h>

int main(){
    int P,R,T,SI;
    printf("Enter Principal, Rate & Time: ");
    scanf("%d %d %d",&P, &R, &T);

    SI = (P*R*T)/100;
    printf("Simple Intrest is: %d", SI);
    return 0;
}