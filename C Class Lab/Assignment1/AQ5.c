# include <stdio.h>
int main(){
    int hours, sec, min, cal;
    printf("Enter Number: ");
    scanf("%d",&sec);
    
    hours = sec/3600;
    sec = sec%3600;
    
    min = sec/60;
    sec = sec%60;

    printf("\n Hours: %d", hours );
    printf("\n Minutes: %d", min ); 
    printf("\n Seconds: %d", sec );
    
    return 0;
}