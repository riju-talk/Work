#include <stdio.h>
#include <math.h>
int main(){
    int num, wfact;
    printf("Enter the number:\n ===>");
    scanf("%d",&num);
    if(num<=12 && num!=0){
    
    wfact =(((int)(1 +floor(2.6*num-0.2)-2*(20)+2022+floor(2022/4)+floor(20/4)))%7)+1;
    printf("  Sun   ");
    printf("Mon  ");
    printf("Tue  ");
    printf("Wed  ");
    printf("Thr  ");
    printf("Fri  ");
    printf("Sat\n");

    if(num==2){
    for(int i=0;i<wfact-1;i++){
            printf("     ");
        }
    }
    else{
       for(int i=0;i<wfact;i++){
            printf("     ");
        } 
    }
    
    if(num%2==0 && num!=2){
        for(int j=1;j<=30;j++){
            printf("%5d",j);
            if((wfact+j)%7==0){
                printf("\n");
            }
        }
    }
    else if(num%2!=0 && num!=2){
        for(int j=1;j<=31;j++){
            printf("%5d",j);
            if((wfact+j)%7==0){
                printf("\n");
            }
        }
    }
    else{
        for(int j=1;j<=28;j++){
            printf("%5d",j);
            if((wfact-1+j)%7==0){
                printf("\n");
            }
        }
    }
    }
    else{
        num=NULL;
        printf("Enter a valid Input");
    }
    return 0;
}