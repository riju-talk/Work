#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct lst
{
    int data;
    struct lst *nextitm;
};

void ins(struct lst *ptr, int data1, int data2);
void ins(struct lst *ptr, int data1, int data2){
    struct lst *newnode=(struct lst*)malloc(sizeof(struct lst));
    for(;ptr!=NULL;ptr=ptr->nextitm){
        if(ptr->data==data1){
            newnode->data=data2;
            newnode->nextitm=ptr->nextitm;
            ptr->nextitm=newnode;
            break;
        }
    }
}
struct lst* create(int x);
struct lst* create(int x){
    struct lst *y=(struct lst *)malloc(sizeof(struct lst));
    y->data=x;
    y->nextitm=NULL;
    return y;
}
void destroy(struct lst *y);
void destroy(struct lst *y){
    free(y);
}
int main()
{
    struct lst *head;
    struct lst *elm2;
 
    head = (struct lst *)malloc(sizeof(struct lst));
    elm2 = (struct lst *)malloc(sizeof(struct lst));

    head->data = 8;
    head->nextitm = elm2;

    elm2->data = 90;
    elm2->nextitm = NULL;

    for (struct lst *currentitm = head;currentitm!= NULL; currentitm = currentitm->nextitm)
    {
        printf("%d ", currentitm->data);
    }
    ins(head,90,180);
    printf("\n");
    for (struct lst *currentitm = head;currentitm!= NULL; currentitm = currentitm->nextitm)
    {
        printf("%d ", currentitm->data);
    }
    return 0;
}