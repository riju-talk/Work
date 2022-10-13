#include<stdio.h>
int main(){
    char x;
    printf("Enter a character\n");
    scanf("%c",&x);

    if(x=='a'|| x=='e'|| x=='o' || x=='i' || x=='u')
        printf("\nThe character is a vowel");
    else
        printf("\nThe character is a consonant");
return 0;
}
