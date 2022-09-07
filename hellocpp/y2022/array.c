#include<stdio.h>
#include<conio.h>
#include<string>

int main(){
    int product = 0;
    int ar2[3][3]{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int medieate[3];
    int product2[3][3]{

    };
    
    for (int a =0;a<3;a++){
        for(int i=0;i<3;i++){
        product = product + ar2[i][a]*ar2[a][i];
        medieate[i]=product;
        product2[a][i]=medieate[2];
        }
        }
    
    for (int i=0;i<3;i++){
        printf("%d\n",product[i][i]);
    }
    
    return 0;
}
