#include<stdio.h>
int main(){
    int x;
    printf("Enter your age\n");
    scanf("%d",&x);
    if(x>=18)
        printf("You are eligible for voting\n");
    else
        printf("You are not eligible per say\n");

return 0;
}
