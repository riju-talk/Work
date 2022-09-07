#include<stdio.h>
#include<conio.h>

int main(){
    int temp, far;
    printf("\nEnter the temprature in Celsius:\n===>");
    scanf("%d",&temp);
    far=(temp*9/5) + 32;
    printf("\nThe temprature in faranhieght is\n=%d",far);
    return 0;
}