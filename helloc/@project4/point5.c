#include<stdio.h>
#include<conio.h>

int main(){
    char name[]="Joker";
    int len=0;
    char *pos;
    pos=name;

    while(*pos != '\0'){
        len++;
        pos++;
    }

    printf("%d",len);
    return 0;
}