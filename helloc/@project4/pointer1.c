#include<stdio.h>
#include<conio.h>

int main(){
    char cpy[100];
    char letter[]="Hello it's me";
    char *d, *c;
    d=cpy;
    c=letter;
    printf("The original srting is: %s",letter);
    while(*c!='\0'){
        *d=*c;
        d++;
        c++;
    }
    printf("\n");
    printf("The original srting is: %s",cpy);
    getch();
    return 0;
}