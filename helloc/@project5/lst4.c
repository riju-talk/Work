#include<stdio.h>
#include<stdlib.h>
struct lst{
    int data;
    struct lst *node;
};

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
    
    for(struct lst *ptr=head;ptr!=NULL;ptr=ptr->node){
        printf("%d ",ptr->data);
    }  
    printf("\n");
    update(head,500,7090);
    
    for(struct lst *ptr=head;ptr!=NULL;ptr=ptr->node){
        printf("%d ",ptr->data);
    }
    del(head,60);
    printf("\n"); 
    for(struct lst *ptr=head;ptr!=NULL;ptr=ptr->node){
        printf("%d ",ptr->data);
    }
    return 0;
}