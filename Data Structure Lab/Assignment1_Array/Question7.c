/*Write a C program to represent the attendance of N students for M classes of a
subject days using a 2-D array, where 1 represents Present and 0 represents
Absent. The array will contain roll no. and day wise attendance. Display the
attendance of each student and calculate the total number of days present*/

# include<stdio.h>
int main(){
    int student, class;
    printf("Enter No. of Students: ");
    scanf("%d",&student);
    printf("Enter No. of Classes: ");
    scanf("%d",&class);
    int rollno[student], arr[student][class];

    for (int i=0; i<=student-1; i++){
        printf("Enter the Rollno. of student %d: ",i+1);
        scanf("%d",&rollno[i]);
        printf("\n");

        for (int j=0; j<class; j++){
            printf("Enter the attendence of Student %d for classes %d (1.Present or 0.Absent): ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("----Attendence----\n");
    for (int i=0; i<=student-1; i++){
        printf("Rollno. %d: \n",rollno[i]);
        printf("Attendence: ");
        int totalAttendence = 0;
        
        for (int j=0; j<class; j++){
            printf("%d ", arr[i][j]);
            if(arr[i][j]==1){
                totalAttendence++;
            }
        }
        printf("\n");
        printf("Total Presents is: %d\n",totalAttendence);
        printf("\n");
    }
}