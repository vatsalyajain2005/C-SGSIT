/*Write a C program using an array of structures to store the roll number, name,
and marks of N students. Search and display student record by roll number.*/

# include<stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    int marks;
};

int main(){
    struct Student students[100];
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter details for student %d:\n", i+1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    int searchRoll;
    printf("Enter the roll number to search: ");
    scanf("%d", &searchRoll);

    for(i = 0; i < n; i++){
        if(students[i].rollNumber == searchRoll){
            printf("Student found!\n");
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %d\n", students[i].marks);
            break;
        }
    }
    if(i == n){
        printf("Student not found.\n");
    }

    return 0;

}