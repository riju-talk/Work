#include<stdio.h>
#include<stdlib.h>

int main(){
    int mat[3][3]={{18,5,9},{0,46,7},{89,100,54}};
    int even=0,odd=0;
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(mat[i][j]%2==0){
                even+=1;
            }
            else{
                odd+=1;
            }
        }
    }

    printf("The Number of odd elemnts is: %d\nThe number of even elements is: %d",odd,even);
    return 0;
}