#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void passing(char arr[],int len);
void passing(char arr[],int len){
    for(int i=0;i<len;i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}
int main(){
    char arr[]={'d','d','f','D','g','A','a','d','f','G','a','a','A','e'};
    int len=sizeof(arr)/sizeof(arr[0]);
    char arr1[]={"\0"};
    
    int len1=sizeof(arr1)/sizeof(arr1[0]);
    
for(int i=0;i<len-1;i++){
        for(int j=i+1 ;j<len;j++){
            if(arr[i]!=arr[j])
            {
                arr1[i]=arr[i];
            }
        }
    }
    passing(arr1,len1);
    return 0;
}