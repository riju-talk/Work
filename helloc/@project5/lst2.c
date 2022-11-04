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
struct lst* create(int x);
struct lst* create(int x){
    struct lst *y=(struct lst *)malloc(sizeof(struct lst));
    y->data=x;
    y->node=NULL;
    return y;
}
void destroy(struct lst *y);
void destroy(struct lst *y){
    free(y);
}

int main(){
    struct lst *head = (struct lst*)malloc(sizeof(struct lst));
    struct lst *node1 = (struct lst*)malloc(sizeof(struct lst));
    struct lst *node2 = (struct lst*)malloc(sizeof(struct lst));
    struct lst *node3 = (struct lst*)malloc(sizeof(struct lst));
    struct lst *node4 = (struct lst*)malloc(sizeof(struct lst));
    struct lst *node5 = (struct lst*)malloc(sizeof(struct lst));
    struct lst *node7 = (struct lst*)malloc(sizeof(struct lst));
    struct lst *node8 = (struct lst*)malloc(sizeof(struct lst));
    struct lst *node9 = (struct lst*)malloc(sizeof(struct lst));
    
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
    node5->node=node7;

    node7->data=240;
    node7->node=node8;

    node8->data=890;
    node8->node=node9;

    node9->data=75;
    node9->node=NULL;
    struct lst *node6 = (struct lst*)malloc(sizeof(struct lst));
    node6->data=909800;

    struct lst *newhead = (struct lst*)malloc(sizeof(struct lst));
    newhead->data=788767;

    struct lst *temp;

    for(struct lst *ptr=head; ptr!=NULL; ptr=ptr->node){
        if(ptr->data==80  && (ptr->node)->data==500){
            temp = (ptr->node);
            ptr->node=node6;
            node6->node=temp;
        }
    }

    struct lst *final = (struct lst*)malloc(sizeof(struct lst));
    final->data=25081902;

    for(struct lst *ptr=head; ptr!=NULL; ptr=ptr->node){
        if(ptr->node==NULL){
            ptr->node=final;
            final->node=NULL;
        }
    }

    newhead->node=head;


    traverse(newhead);

    getch();
    return 0;
}