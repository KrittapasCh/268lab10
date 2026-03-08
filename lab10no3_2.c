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

/*

ทดสอบรันโปรแกรมและเขียนผลลัพท์พร้อมอธิบายโปรแกรม

void DisplayData2(struct Books *CBook) คือ ฟังก์ชันที่ชื่อ DisplayData2 
โดยรับข้อมูลชนิด Pointer ของ Struct และไม่มี Return 
ฟังก์ชันนี้ทำหน้าที่แสดงข้อมูลของ struct ที่รับเข้ามา

พารามิเตอร์ที่รับเข้ามาคือ struct Books *CBook 
โดยเป็นการ Passing by Address

(*CBook).BookID คือ การเข้าถึงข้อมูล BookID ใน struct 
โดยใช้ Pointer dereference แล้วใช้ . เพื่อเข้าถึงสมาชิกใน struct

CBook->BookTitle คือ การใช้ -> เพื่อเข้าถึงสมาชิกใน struct ผ่าน pointer 
ซึ่งมีความหมายเหมือนกับ (*CBook).BookTitle

*/
