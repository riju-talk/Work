#include<stdio.h>
#include<conio.h>

int main(){
    int count1;
    int arr[] = {1,-6,78,-90,4,-5,8,3,75,24,-90,44,-67,98,-100,-234};
    int length = sizeof(arr)/sizeof(arr[0]);
    
    int factor = 0;
    while(factor<length){
        
        if(arr[factor]<0){
            factor ++;
            count1 ++;
        }
        else{
            factor ++;
        }
    }
    printf("%d",count1);
    
    return 0;
}