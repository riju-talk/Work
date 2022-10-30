#include<stdio.h>
int main(){
    int i,j,k,row;
    printf("Enter number of rows\n");
    scanf("%d",&row);

    for(i=1;i<=row;i++){

        for(k=(row-i);k>0;k--){
            printf("  ");
        }

        for(j=1;j<i;j++){
            printf("* ");
        }
        printf("* ");
        for(j=1;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
return 0;
}
