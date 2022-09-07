#include<stdio.h>
#include<stdlib.h>

int main(){
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int mat1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int count=0;
    int result[3][3];  
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                count+=mat[i][k]*mat1[k][j];
            }
            result[i][j]=count;
            count=0;
        }
    }
    
    /*for(int i=0;i<3;i++)
    {   
        for(int j=0;j<3;j++){
            printf("%4d",matr[i][j]);
        }
        printf("\n");
    }*/
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%5d",result[i][j]);
        }
        printf("\n");
    }
return 0;    
}