#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct lst{
    int data;
    struct lst *node;    
};

void traverse(struct lst *ptr);
void traverse(struct lst *ptr){
    while(ptr!=NULL){
        printf("Element in the list is %d\n",ptr->data);
        ptr=ptr->node;
    }
}
int main(){
    struct lst *head = (struct lst*)malloc(sizeof(struct lst));
    struct lst *node1 = (struct lst*)malloc(sizeof(struct lst));
    struct lst *node2 = (struct lst*)malloc(sizeof(struct lst));
    struct lst *node3 = (struct lst*)malloc(sizeof(struct lst));
    struct lst *node4 = (struct lst*)malloc(sizeof(struct lst));
    struct lst *node5 = (struct lst*)malloc(sizeof(struct lst));
     
    head->data=10;
    head->node=node1;

    node1->data=90;
    node1->node=node2;

    node2->data=80;
    node2->node=node3;

    node3->data=500;
    node3->node=node4;

    node4->data=60;
    node4->node=node5;

    node5->data=120;
    node5->node=NULL;

    traverse(head);

    getch();
    return 0;
}