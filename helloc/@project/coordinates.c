#include<stdio.h>
#include<conio.h>
#include<windows.h>
void gotoxy(int x, int y);
void gotoxy(int x, int y)
{
    COORD c = { x, y };  
    SetConsoleCursorPosition(  GetStdHandle(STD_OUTPUT_HANDLE) , c);
}
int main(){
    gotoxy(10,10);
    putchar('A');
}