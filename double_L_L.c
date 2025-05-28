#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* prev;
    struct node* next;
};

struct node * head;

//-----------------------------------------------------
struct node* create_node(int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->prev=NULL;
    newnode->next=NULL;
    return newnode;
}

//-----------------------------------------------------
void insert_at_begin(int data){
    struct node* newnode=create_node(data);
    if(newnode==NULL){
        printf("memory allocation failed");
        return;
    }
    if(head==NULL){
        head=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}

//-----------------------------------------------------
void print_list(){
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d <-> ",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}

//-----------------------------------------------------
void insert_at_end(int data){
    struct node * newnode=create_node(data);
    if(newnode==NULL){
        printf("memory allocation failed");
        return;
    }
    struct node*ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=newnode;
    newnode->prev=ptr;
}

//-----------------------------------------------------
void insert_at_given_pos(int data,int pos){
    struct node* newnode=create_node(data);
    if(newnode==NULL){
        printf("memory allocation failed");
        return;
    }
    if(head==NULL){
        if(pos==1){
            head=newnode;
            return;
        }else{
            printf("list is empty cont insert node at given pos");
            return;
        }
    }
    if(pos==1){
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        return;//IMPORTANT! Otherwise below code will run unnecessarily
    }
    struct node* ptr=head;
    int count=1;
    while(ptr!=NULL && count<pos-1){
        ptr=ptr->next;
        count++;
    }
    if(ptr==NULL || pos<=0){
        printf("invalid position\n");
        return;
    }
    newnode->next=ptr->next;
    newnode->prev=ptr;
    if (ptr->next != NULL){
        ptr->next->prev=newnode;
    }
    ptr->next=newnode;
}

//-----------------------------------------------------
void delete_at_start(){
    if(head==NULL){
        printf("list is empty");
        return;
    }
    struct node*ptr=head;
    head=head->next;
    head->prev=NULL;
    free(ptr);
    ptr=NULL;
    printf("\nnode deleted at head\n");
    
}
void delete_at_end(){
    if(head==NULL){
        printf("list is empty");
        return;
    }
    struct node *ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->prev->next=NULL;
    free(ptr);
    ptr=NULL;
    printf("\nnode deleted at end\n");
}

int main(){
    
    insert_at_begin(30);
    insert_at_begin(20);
    insert_at_begin(10);
    print_list();
 
    insert_at_end(80);
    insert_at_end(90);
    print_list();
    
    insert_at_given_pos(44,5);
    insert_at_given_pos(42,1);
    print_list();
    
    delete_at_start();
    print_list();
    
    delete_at_end();
    print_list();
    
    // print_list();
    
}
