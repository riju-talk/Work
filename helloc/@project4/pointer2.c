#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char word[] = "Eching Bang";
    int len=strlen(word);
    char *poin;
    poin=word;
    
    for(int i=0;i<len;i++){
        printf("%c is the letter and %u is it's addres in memory\n",*(poin+i),(poin+i));
    }
    return 0;
}