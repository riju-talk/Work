#include<stdio.h>
#include<conio.h>

int main(){
    int arr[]={1,4,20,67,-70,56,29,-87,45,900,-440};
    int len = sizeof(arr)/sizeof(arr[0]);
    int min, max;
    min = arr[0];
    max = arr[len-1];
    
    for(int i=0;i<len;i++){
        if (arr[i]>max){
            max=arr[i];
        }
        if (arr[i]<min){
            min=arr[i];
        }
    }
    printf("The maximum and minimum values are %d and %d",max,min);
    return 0;
}