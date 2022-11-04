#include<stdio.h>
#include<stdlib.h>
struct lst{
    int data;
    struct lst *node;
};

void search(struct lst *ptr,int data){
    int count=-1;
    for(;ptr!=NULL;){
        count+=1;
        if(ptr->data==data){
            printf("term %d :adress %u :postion %d ",ptr->data,ptr,count);
            break;
        }
        ptr=ptr->node;
    }
}

void sort(struct lst *ptr,int data){
    for(;ptr!=NULL;ptr=ptr->node){
        for()
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
    
    for(struct lst *ptr=head;ptr!=NULL;ptr=ptr->node){
        printf("%d ",ptr->data);
    }   
    printf("\n\r");
    search(head,120);
    return 0;
}