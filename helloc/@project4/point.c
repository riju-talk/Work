#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int sum(int *a,int *b);
int main(){
    int a,b,s;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Enter another number\n");
    scanf("%d",&b);
    s=sum(&a,&b);
    printf("The sum of the given input is: %d",s);
    getch();
    return 0;
}

int sum(int *a,int *b){
    int s; 
    s = *a+*b;
    return s;
}