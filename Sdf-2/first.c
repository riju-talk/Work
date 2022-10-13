#include<stdio.h>

int main(){
    int x,y;
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    if(x>y){
        printf("%d is greatr than %d",x,y);
    }
    else if(y>x)
    {
        printf("%d is greater than %d",y,x);
    }
    else
    {
        printf("Both numbers are equal");
    }
return 0;
}
