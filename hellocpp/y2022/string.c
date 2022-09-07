#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char name[20];
    name[0]='r';
    name[1]='i';
    name[2]='j';
    name[3]='u';
    name[4]='s';
    name[5]='m';
    name[6]='i';
    name[7]='t';
    name[8]='\0';
    printf("%s",name);
   
    char name_1[20];
    for(int i=0;i<20;i++){
        if(name[i]=='\0'){
            name_1[i]=name[i];
        }
        else if(name[i]<=90 && name[i]>=65){
            name_1[i]=name[i];
        }
        else {
            name_1[i]=name[i]-32;
        }
    }
    printf("\n%s",name_1);
    return 0;
}
