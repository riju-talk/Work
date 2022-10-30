#include<stdio.h>
int main(){
    int sum,nu,isuniqe=1;
    printf("Enter the number\n");
    scanf("%d",&sum);

    for(int i=0;i<=9;i++){
        for(int j=sum;j!=0;j/=10){
            if(i==(j%10)){
                nu+=1;
                isuniqe=0;
                break;
            }
            else
            if(isuniqe!=1){
                nu+=1;
            }
            else{
                nu=0;
            }
        }
        printf("The frequency of %d is: %d\n",i,nu);
    }
    return 0;
}