#include<stdio.h>
#include<stdlib.h>
void traverse(int arr[], int n);
void traverse(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[100]={1,2,3,4,5,6,7,8,9,10};
    int odd[100];
    int even[100];
    int len=10;
    int i=0;
    int oddc,evenc;
    oddc=evenc=0;
    while(i<len){
        if (arr[i]%2!=0){
            odd[oddc]=arr[i];
            oddc++;
        }
        else{
            even[evenc]=arr[i];
            evenc++;
        }
        i++;
    }
    traverse(odd,oddc);
    traverse(even,evenc);
    return 0;
}