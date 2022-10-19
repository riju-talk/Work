#include<stdio.h>
#include<conio.h>

int main(){
    FILE *riju;
    char string;
    riju=fopen("this.txt","r");
    for(int i=0;'string'!=EOF;i++){
        string = fgetc(riju);
        printf("This is the file content:\n%s",string);
    }
    //fprintf(riju,"%s",string);

    fclose(riju);
    return 0;
}