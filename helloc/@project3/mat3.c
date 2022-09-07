#include<stdio.h>
#include<stdlib.h>
void compare(int mat1[3][3],int mat2[3][3]);
int main(){
    int mat1[3][3]={{1,3,5},{7,9,11},{13,15,17}};
    int mat2[3][3]={{1,3,5},{7,9,11},{13,15,17}};
    
    compare(mat1,mat2);
    
    return 0;
}

void compare(int mat1[3][3],int mat2[3][3]){
    int decide=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(mat1[i][j]==mat2[i][j]){
                decide+=1;
            }
            else{
                decide+=0;
            }

        }
    }

    if(decide==9)
        printf("The Matrices are equal");
    else
        printf("The matrices are not equal");
}