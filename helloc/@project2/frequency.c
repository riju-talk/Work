#include<stdio.h>
#include<stdlib.h>
int main(){

char arr[100]={'a','a','d','f','g','j','j','k','l','l','d','d','a','p','a'};
int num=15;
int i,count=0;
while(i < num){
    int j=i+1;
    while(j < num){
        if(arr[i]==arr[j]){
            count++;
            break;
        }
        j++;
    }
    i++;
}
printf("%d",count);
return 0;
}