#include<stdio.h>
#include<conio.h>

int str_length(char ar1[]);
char concat(char str1[],char str2[]);
char concat(char str1[],char str2[]){
    char str3[]="\0";
    int form=str_length(str2)+str_length(str1);
    
    for(int i=0;i<=(form);i++){
        if(i==(form-1)){
            str3[i]+=str1[i];
        }
        else{
            str3[i]+=str2[i];
        } 
    }
    str3[form-1]="\0"
    return str3;
}
int main(){
    char string1[]="Hello";
    char string2[]="World";
    
    
    printf("%s",string1);
    return 0;
}