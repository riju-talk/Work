#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<windows.h>
int main(){
    setlocale(LC_ALL,"");
    SetConsoleCP(437);
    SetConsoleOutputCP(437);
    //printf("%c",141);
   
    for(int i=0;i<=255;i++){
        // printf("%hhu\n",i);
        //putchar((unsigned char)i);
        printf("%c=%d\n",i,i);
    }
    return 0;
}