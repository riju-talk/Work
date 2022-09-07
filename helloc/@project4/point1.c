#include<stdio.h>
#include<conio.h>

void passing(int *);
int main(){
    int ar[5];
    printf("Enter a number into the array\n");
    for(int i=0;i<5;i++){
        scanf("%d",&ar[i]);
    }

    passing(&ar[0]);
    getch();
    return 0;
}
void passing(int *j){
    
    printf("\nThe elements of the array are:\n");
    for(int i=0;i<5;i++){
        printf("%d,",*(j+i));
    }
}