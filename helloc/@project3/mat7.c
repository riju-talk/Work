#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("Here is the original matrix:\n");
    
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }

    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                int temp;
                temp = mat[i][j];
                mat[i][j] = mat[i][2-j];
                mat[i][2-j] = temp; 
            }
        }
    }
    printf("\n");
    printf("Here is the matrix after changing:\n");
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}