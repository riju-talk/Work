#include<stdio.h>
#include<conio.h>

struct date {
        int year;
        int month;
        int day;
    };

int main(){
    
    struct date d1;

    printf("Enter the date in (yyyy-mm-dd);\n");
    scanf("%d-%d-%d",&d1.year,&d1.month,&d1.day);
    printf("\nThe date is:\n\n(%d/%d/%d)",d1.day,d1.month,d1.year);
    getch();
    return 0;
}