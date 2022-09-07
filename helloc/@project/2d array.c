#include<stdio.h>
#include<conio.h>

int main(){
    int prim[4][5];
    for(int i=0; i<=20; i++){
        if(i<5 && i>=0){
            prim[0][i] = i+1;
        }
        else if (i<10 && i>=5){
            prim[1][i-5] = i+1;
        }
        else if (i<15 && i>=10){
            prim[2][i-10] = i+1;
        }
        else if (i>=15 && i<20){
            prim[3][i-15] = i+1;
        }
}

for (int x=0;x<=3;x++){
    for (int y=0;y<=4;y++){
        printf("%7d",prim[x][y]);
        if((prim[x][y])%5==0){
            printf("\n");
        
    }
}
}
return 0;
}