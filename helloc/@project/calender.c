#include<stdio.h>
#include<conio.h>

int main(){
    int inp;
    int years;
    int days;
    int months;
    int weeks;

    if (inp>366){
        if (inp % 2 != 0){
            years = 
        }
        months = (inp-inp*years)/30;
        weeks = months-months;
    }
    else{
        years = 0;
        months = inp/30;
        weeks = months/4;
    }
    return 0;
}