# include <stdio.h>
int main(){
    int len, bre;
    printf("Enter Length: ");
    scanf("%d",&len);
    printf("Enter Breadth: ");
    scanf("%d",&bre);
    printf("\n Area is: %d", len*bre );
    printf("\n Parameter is: %d", 2*(len+bre) );
    
    return 0;
}