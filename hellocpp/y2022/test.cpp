#include<iostream>
#include<string>
#include<stdio.h>
#include<conio.h>

using namespace std;

int exp(int a,int c){
    int b =1 ;
    for (int i=1;i<=c;i++){
        b *= a;
    }
    return b;
}


int main(){
int matrix[3][3] = {
    {1,2,3},
    {1,7,8},
    {5,6,1}
};

matrix[2][1]=99;
for (int i = 0;i<3;i++){
    for (int j = 0;j<3;j++){
        
        cout << matrix[i][j] << ends;
    }
    cout << endl;
}
return 0;


}