#include <stdio.h> 
#include <stdlib.h> 

struct Books{ 
    int BookID; 
    char BookTitle[50]; 
} ComputerBook;

void DisplayData2(struct Books *CBook);

int main() { 
    printf("Enter Book ID :");      
    scanf("%d",&ComputerBook.BookID); 
    printf("Enter Book Title :");   
    scanf("%s",ComputerBook.BookTitle);
    DisplayData2(&ComputerBook);
    return 0; 
} 

void DisplayData2(struct Books *CBook){ 
    printf("Book ID : %d \n",(*CBook).BookID); 
    printf("Book Title : %s \n",CBook->BookTitle); 
} 
