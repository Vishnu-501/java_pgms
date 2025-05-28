#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};
void print_list(struct node **head){
    struct node* p=*head;
    while(p!=NULL){
        printf("%d  ",p->data);
        p=p->link;
    }
}

int main() {
    struct node* head=NULL;
    // printf("%d",head);
    struct node *first=(struct node*)malloc(sizeof(struct node*));
    first->data=10;
    struct node *second=(struct node*)malloc(sizeof(struct node*));
    second->data=20;
    struct node *third=(struct node*)malloc(sizeof(struct node*));
    third->data=30;
    head=first;
    first->link=second;
    second->link=third;
    third->link=NULL;
    print_list(&head);
    
}
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
void printlist(struct node *head){
    struct node* p=head;
    while(p!=NULL){
        printf("%d  ",p->data);
        p=p->next;
    }
}
struct node* insert_at_starting(struct node* head,int x){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("memory allocation is failed");
        return NULL;
    }
    newnode->data=x;
    newnode->next=NULL;
    if(head=NULL){
        head=newnode;
        return head;
    }
    newnode->next=head;
    head=newnode;
    return head;
}
struct node* insert_at_end(struct node* head,int x){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("memory allocation is failed");
        return NULL;
    }
    newnode->data=x;
    newnode->next=NULL;
    if(head=NULL){
        head=newnode;
        return head;
    }
    struct node *temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}

int main() {
    struct node* head=NULL;
    head=insert_at_starting(head,5);
    head=insert_at_starting(head,6);
    head=insert_at_starting(head,5);
    printlist(head);
    head=insert_at_end(head,8);
    printlist(head);

}