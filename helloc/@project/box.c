#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<windows.h>
int main(){

    setlocale(LC_ALL,"");
    SetConsoleCP(437);
    SetConsoleOutputCP(437);
    int height;
    int width;
    
    
    printf("Pls enter the dimension of the squarebox:\n===> ");
    scanf("%d",&height);
    width=height+5;
    
    char gap[width];
    gap[0]='\0';
    
    for(int j=0;j<=width;j++){
        gap[j]=32;
    }
        gap[width+1]='\0';
    printf("%c",201);
    for(int i=0;i<=width;i++){
        printf("%c",205);
    }
    printf("%c",187);
    printf("\n");
    for(int i=0;i<=height;i++){
        printf("%c%s%c\n",186,gap,186);
    }
    printf("%c",200);
    for(int i=0;i<=width;i++){
        printf("%c",205);
    }
    printf("%c",188);
    return 0;
}