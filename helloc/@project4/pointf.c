#include<stdio.h>
#include<conio.h>

int add(int a,int b);
int main(){
    int (*point)(int, int);
    int fact;
    point=&add;
    fact=(*point)(80,90);

    printf("The sum of the numbers are %d",fact);
    return 0;
}

int add(int a,int b){
    int sum;
    sum = a+b;
    return sum;
}