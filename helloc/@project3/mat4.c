#include<stdio.h>
#include<stdlib.h>

int main(){
    int mat[3][3]={{18,99,100},{44,62,89},{101,532,900}};
    int tra[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            tra[j][i]=mat[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d  ",tra[i][j]);
        }
        printf("\n");
    }

    return 0;
}
