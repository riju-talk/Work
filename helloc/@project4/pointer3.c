#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char cpy[250] = "The Hand is ";
    char word[] = "Eching bang";
    
    printf("Orignal string is: %s\n", word);
    
    char *ptr1, *ptr2;
    
    ptr1 = cpy;
    ptr2 = word;
    int len = strlen(cpy);
    for (int i = 0; i < strlen(word); i++)
    {
        *(ptr1 + len + i) = *(ptr2 + i);
    }
    printf("The Concatenated string in:%s\n", cpy);
    getch();
    return 0;
}