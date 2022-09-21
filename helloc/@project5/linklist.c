#include<stdio.h>
#include<conio.h>

struct linklst{
    int elm;
    int *add;
};

int main(){
    struct linklst list[30];
    int fact;
    printf("Enter the numbers:\n");
    for(int i=0;i<8;i++){
        scanf("%d",&fact);
        list[i].elm=fact;
        list[i].add=&list[i].elm;
    }

    for(int i=0;i<8;i++){
        printf("%d->%u  ",list[i].elm,list[i].add);
    }
    return 0;
}