#include <stdio.h> 
#include <stdlib.h> 

struct Books{ 
    int BookID; 
    char BookTitle[50]; 
} ComputerBook;

void DisplayData(struct Books CBook); 



int main() { 
    printf("Enter Book ID :");      
    scanf("%d",&ComputerBook.BookID); 
    printf("Enter Book Title :");   
    scanf("%s",ComputerBook.BookTitle); 
    DisplayData(ComputerBook); 

	return 0; 
} 

void DisplayData(struct Books CBook){ 
    printf("Book ID : %d \n",CBook.BookID); 
    printf("Book Title : %s \n",CBook.BookTitle); 
} 


/*

ทดสอบรันโปรแกรมและเขียนผลลัพธ์พร้อมอธิบายโปรแกรม

ตัวอย่างการรันโปรแกรม

Enter Book ID :101
Enter Book Title :Cprogramming

ผลลัพธ์

Book ID : 101
Book Title : Cprogramming


คำอธิบายโปรแกรม

void DisplayData(struct Books CBook) คือ ฟังก์ชันที่ชื่อ DisplayData
โดยรับข้อมูลชนิด Struct และไม่มีการ return ค่า โดยฟังก์ชันนี้มีหน้าที่
แสดงข้อมูลของ struct ที่รับเข้ามา

พารามิเตอร์ที่รับเข้ามาคือ struct Books CBook ซึ่ง CBook เป็นตัวแปร
local ภายในฟังก์ชัน โดยเป็นการส่งค่าแบบ Passing by Value

struct Books เป็นโครงสร้างข้อมูลที่ใช้เก็บข้อมูลหนังสือ ประกอบด้วย
int BookID สำหรับเก็บรหัสหนังสือ และ char BookTitle[50] สำหรับเก็บชื่อหนังสือ

ในฟังก์ชัน main จะรับค่ารหัสหนังสือและชื่อหนังสือจากผู้ใช้เก็บไว้ในตัวแปร
ComputerBook จากนั้นส่งข้อมูล ComputerBook ไปยังฟังก์ชัน DisplayData()
เพื่อแสดงผลข้อมูล Book ID และ Book Title ทางหน้าจอ

*/
