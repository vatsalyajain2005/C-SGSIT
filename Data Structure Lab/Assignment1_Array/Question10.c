/*Write a C program using an array of structures to store book ID, title, author, andprice 
of N books. Display all books, search for a book by ID, and display the most expensive book.*/

# include<stdio.h>
struct Book{
    int id;
    char name[50];
    char auther[50];
    int price;
}; 

int main(){
    struct Book book[100];
    
    int n;
    printf("Enter Number of Books: ");
    scanf("%d",&n);

    for (int i=0; i<n;i++){
        printf("---Enter %d Book Details---\n",i+1);
        printf("Enter BookID: ");
        scanf("%d",&book[i].id);
        printf("Enter Tittle: ");
        scanf("%s",&book[i].name);
        printf("Enter Auther: ");
        scanf("%s",&book[i].auther);
        printf("Enter Price: ");
        scanf("%d",&book[i].price);
    }
    // Displaying all books
    printf("---Displaying all Books---\n");
    for(int i=0; i<n;i++){
        printf("%s\n", book[i].name);
    }
    // Search for a book by ID
    int searchBook;
    printf("Enter the BookID to search Book Details: ");
    scanf("%d", &searchBook);
    
    printf("---Book Deatil---\n");
    for(int i=0; i<n; i++){
        if (book[i].id == searchBook){
            printf("BookID: %d\n",book[i].id);
            printf("Tittle of the Book: %s\n",book[i].name);
            printf("Auther of the Book: %s\n",book[i].auther);
            printf("Price of the Book: %d\n",book[i].price);
        }
    }
    // display the most expensive book
    int Expensive = 0;
    int expensiveIndex = 0;

    for (int i=0; i<n; i++){
        if(Expensive < book[i].price){
            Expensive = book[i].price;
            expensiveIndex = i;
        }
    }
    printf("Most Expensice Book is: %s", book[expensiveIndex].name);
}
