#include<stdio.h>
#include<stdlib.h>

int main(){
    int mat1[3][3]={{1,2,3},{5,10,15},{3,6,9}};
    int sum=0;
    
    printf("Sum of rows: \n");
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum += mat1[i][j];
        }
        
        printf("row %d  %4d  \n",i+1,sum);
        sum=0;
    }
    printf("\n");
    
    printf("Sum of columns: \n");
    for (int j=0;j<3;j++){
        for(int i=0;i<3;i++){
            sum += mat1[i][j];
        }

        printf("column %d  %4d  \n",j+1,sum);
        sum=0;
    }
    return 0;
}