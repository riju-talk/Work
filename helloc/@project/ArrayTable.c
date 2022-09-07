#include<stdio.h>
#include<conio.h>

int prime[3][10];
int tableof(int array[3][10],int tr);
int tableof(int array[3][10],int tr){
    for(int i=0;i<=9;i++){
        prime[0][i]=i+1;
        prime[1][i]=tr;
        prime[2][i]=(i+1)*tr;
    }

    return array[3][10];
}
int main(){
    
    for(int x;x<=9;x++){
        tableof(prime,(x+1));
    for(int j=0;j<=2;j++){
        for(int i=0;i<=9;i++){
        printf("%5d",prime[j][i]);

    }
        printf("\n");

    }
        printf("\n");
    }
    return 0;
}