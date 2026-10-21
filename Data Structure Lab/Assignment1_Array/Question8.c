/*Write a C program to search for a given element in a two-dimensional array.
Display the row and column position of every occurrence of the element and
count its total occurrences. */

# include<stdio.h>
int main(){
    int arr[3][3] = {10,20,30,
                     40,50,60,
                     20,80,20};
    
    int n, count = 0;             
    printf("enter the value you want to search: ");
    scanf("%d",&n);

    for (int i =0; i<3; i++){
        for (int j=0; j<3; j++){
            if (n == arr[i][j]){
                printf("%d is present in Row[%d], Column[%d]\n",n, i+1, j+1);
                count++;
            }
        }
    }
    if (count == 0){
        printf("%d is not present in the array", n);   
    } else{
        printf("Total Occurrences of %d is: %d", n, count);
    }
    
}