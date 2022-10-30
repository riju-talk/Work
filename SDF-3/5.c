#include<stdio.h>
int main(){
    int row,i,j,k;
    printf("Enter the number of rows\n");
    scanf("%d",&row);

    for(i=1;i<=(row-1);i++){

        for(k=(row-i);k>0;k--){
            printf(" ");
        }

        for(j=1;j<i;j++){
            if(j>1 && j<i){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        
        if(i!=1)
            printf(" ");
        else
            printf("*");
        
        for(j=1;j<i;j++){
            if(j==(i-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
        for(int k=0; k<row;k++){
            printf("* ");
        }

    return 0;
}
