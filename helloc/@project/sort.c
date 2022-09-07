#include<stdio.h>
#include<conio.h>
void passing(int arr[], int len);
void passing(int arr[], int len){
    for(int i=0;i<len;i++){
        printf("%1d,",arr[i]);
    }
    printf("\n");
}

void bsort(int arr[], int len);
void bsort(int arr[], int len){
    
    for (int i = 0; i < (len-1); i++)
    {
        for ( int j = 0; j <(len-1-i); j++)
        {
            if(arr[j]>arr[j+1]){
            int temp;
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
    
}
int main(){
    int arr[]={3,1,5,21,17,9,13,11,15,19,7,2};
    int elm, len;
    len = sizeof(arr)/sizeof(arr[0]);
    
    passing(arr,len);
    bsort(arr,len);
    
    passing(arr,len);
    return 0;
}