#include<stdio.h>
#include<stdlib.h>
int main(){
   int arr[100]={1,2,3,4,5,6,7,8,9,1,5,4,2,6,7,2,3,6,3,6,2,5,4,6,3,3,11};
   int len = 27;

   for(int i=0;i<len;i++){
    int par=0;
    for(int j=0;j<len;j++){
        if(arr[i]==arr[j] && i!=j){
            par=1;
        }
    }
    if(par!=1){
            printf("%d\n",arr[i]);
        }
   }

   
    return 0;
}