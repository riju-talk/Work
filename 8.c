#include<stdio.h>

int main(){
    for(int i=1;i<=7;i++){
        for(int k=7-i;k>=0;k--){
            printf("*");
        }
        for(int j=(i-1);j>=1;j--){
            printf(" ");
        }
        printf(" ");
        
        for(int j=1;j<i;j++){
            printf(" ");
        }
        
        for(int k=7-i;k>=0;k--){
            printf("*");
        }
        printf("\n");
    }
    for(int i=6;i>=1;i--){
        
        for(int k=1;k<=(6-i+2);k++){
            printf("*");
        }

        for(int j=(i-1);j>=1;j--){
            printf(" ");
        }
        printf(" ");
        
        for(int j=1;j<i;j++){
            printf(" ");
        }
        for(int k=1;k<=(6-i+2);k++){
            printf("*");
        }

        printf("\n");
    }
    return 0;
}