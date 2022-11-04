#include<stdio.h>
#include<stdlib.h>
struct lst{
    int data;
    struct lst *node;
};
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

void update(struct lst *ptr,int data1,int data2);
void update(struct lst *ptr,int data1,int data2){
    struct lst *temp;
    for(;ptr!=NULL;){    
        ptr=ptr->node;
        if(ptr->data==data1){
            ptr->data=data2;
            break;
        }
    }
}
void del(struct lst *ptr,int data);
void del(struct lst *ptr,int data){
    for(; ptr!=NULL;){
        ptr=ptr->node;
        if((ptr->node)->data==data){
            ptr->node=(ptr->node)->node;
            break;
        }
    }
}   

void insert_bet(struct lst *ptr,int x,int y){
    struct lst *node=create(90);
    for(; ptr!=NULL; ptr=ptr->node){
        if(ptr->data==x  && (ptr->node)->data==y){
            temp = (ptr->node);
            ptr->node=node6;
            node6->node=temp;
        }
    }
}

void insert_end(struct lst *ptr,final){
    struct lst *final=create(25091902);
     for(; ptr!=NULL; ptr=ptr->node){
        if(ptr->node==NULL){
            ptr->node=final;
            final->node=NULL;
        }
    }


}
void insert_beg(struct lst *ptr){
    for(;ptr!=NULL;ptr=ptr->node)
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