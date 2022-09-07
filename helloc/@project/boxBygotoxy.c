#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
void gotoxy(int x, int y);
void gotoxy(int x, int y)
{
    COORD c = { x, y };  
    SetConsoleCursorPosition(  GetStdHandle(STD_OUTPUT_HANDLE) , c);
}
void drawbox(int x,int y,int w, int h);

void drawbox(int x,int y,int dime1, int dime2){
    int cornerTB;
    int cornerS;
    int edge1;
    int edge2;
    cornerTB = dime1-1;
    cornerS = dime2-1;
    edge1 = dime1-2;
    edge2 = dime2-2;
    system("cls");
    //corner 1
    gotoxy(x,y);
    putchar(201);
    //corner 2
    gotoxy(x+cornerTB,y);
    putchar(187);
    //corner 3
    gotoxy(x,y+cornerS);
    putchar(200);
    //corner 4
    gotoxy(x+cornerTB,y+cornerS);
    putchar(188);
    
    //upper
    for(int i=0;i<edge1;i++){
    gotoxy((x+1)+i,y);
    putchar(205);};
    //left
    for(int i=0;i<edge2;i++){
    gotoxy(x,i+(y+1));
    putchar(186);};
    //right
    for(int i=0;i<edge2;i++){
    gotoxy(x+cornerTB,i+(y+1));
    putchar(186);};
    //bottom
    for(int i=0;i<edge1;i++){
    gotoxy((x+1)+i,y+cornerS);
    putchar(205);};
    
}
int main(){

    setlocale(LC_ALL,"");
    SetConsoleCP(437);
    SetConsoleOutputCP(437);
    printf("Pls enter the dimensions of the box:\n");
    printf("Pls enter the height of the box:\n==> ");
    int hight;
    scanf("%d",&hight);
    printf("Pls enter the width of the box:\n==> ");
    int width;
    scanf("%d",&width);
    
    drawbox(50,10,width,hight);
    

    return 0;
    
}