#include<stdio.h>
#include<stdlib.h>
int main(){
    char arr[100]={'a','a','d','f','g','j','j','k','l','l','m','d','o','p'};
    int num=14;
    int i,j,k;
    for(i=0; i<num; i++)
    {
        j=i+1;
        while(j<num){
            if(arr[i]==arr[j]){
                k=j;
                while(k<num){
                    arr[k]=arr[k+1];
                    k++;
                }
                j--;
                num--;
            }
            j++;
        }
    }
    
    for(int i=0;i<num;i++){
        printf("%c",arr[i]);
    }
    
    

    return 0;
}