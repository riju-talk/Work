#include<stdio.h>
#include<stdlib.h>
#include "traverse.h"

int main(){
    int arr[100]={1,2,3,4,5,6,7,8,9,0,10,11,12,13,14,15,16,17,18,19};
    int len = 20;
    for(int i=0;i<len;i++){
        arr[i+len]=arr[(len-1)-i];
    }
    for(int i=0;i<len;i++){
        arr[i]=arr[len+i];
        arr[len+i]=0;
    }
    traversei(arr,len);
    return 0;
}