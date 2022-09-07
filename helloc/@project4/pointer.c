#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y);
int main(){
    int a;
    int b;
    printf("Enter value of a\n");
    scanf("%d", &a);
    printf("Enter value of b\n");
    scanf("%d", &b);
    printf("the value of the variables are a = %d and b = %d",a,b);
    swap(&a,&b);
    printf("\n");
    printf("the value of the variables are a = %d and b = %d",a,b);
    
    
    getch();

    
    return 0;
}
void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
