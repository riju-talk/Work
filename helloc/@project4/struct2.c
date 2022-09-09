#include<stdio.h>
#include<conio.h>

struct time{
    int hour;
    int minute;
    int second;
};

int main(){
    
    struct time t;
    printf("Enter the time\n:");
    scanf("%d-%d-%d",&t.hour,&t.minute,&t.second);
    printf("\nThe time after 60 mins is %d-%d-%d\n",t.hour+1,t.minute,t.second);
    return 0;
}