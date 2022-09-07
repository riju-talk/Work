#include<stdio.h>
#include<conio.h>

int main(){
    char array1[] = {'A','B','c','d','e','F','g','H','\0'};
    int j = 1;
   
   char temp;
            temp = array1[2];
            array1[2] = array1[5];
            array1[5] = temp;

            temp = array1[3];
            array1[3] = array1[7];
            array1[7] = temp; 
    

    printf("%s",array1);
    return 0;
    }