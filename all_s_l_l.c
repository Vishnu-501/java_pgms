#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node{
    int data;
    struct node *next;
};

struct node* insert_at_beginning(struct node* head,int x);
struct node* insert_at_last(struct node* head,int x);
struct node* insert_at_given_position(struct node* head,int x,int pos);
struct node* delete_at_starting(struct node* head);
struct node* delete_at_last(struct node* head);
struct node* delete_at_given_position(struct node* head,int pos);
struct node* find_middle_node(struct node* head);
void search_last_node(struct node* head);
bool search_is_loop_existed(struct node* head);
void search_is_circular_linkedlist(struct node* head);
void find_node_at_given_pos(struct node* head,int pos);
struct node* delete_node_at_given_pos_from_last(struct node* head,int pos);
struct node* reversing_linkedlist(struct node* head);
void printlist(struct node* head);
int count_noof_nodes_in_list(struct node* head);
// delete_given_node_without_passing_headnode(node);

int main() {
  struct node* head=NULL;
  int choice=0,x,pos;
  head=insert_at_beginning(head,5);
  head=insert_at_beginning(head,10);
//   printf("%d",head->next);
//   head=insert_at_beginning(head,1060221600);
  head=insert_at_beginning(head,20);
  head=insert_at_beginning(head,25);
  printlist(head);
  while(choice <=17){
      printf("\n---------- choose any option -------\n");
      printf("1)Insert at beginning \n2)Insert at end \n3)Insert node at given position\n4)Delete at starting \n5)Delete node at end \n6)Delete at given position\n7)Search last node\n8)search is loop existed\n9)search is circular linkedlist\n10)find node at given position\n11)find middle node\n12)reversing linkedlist\n13)printlist\n14)delete node at given position from last node\n15)count noof nodes in list\n16)delete given node without passing headnode\n17)exit\n*****************************");
      printf("\n==>Enter your choice:");
      scanf("%d",&choice);
       
      switch(choice){
          case 1:
              printf("Enter data:");
              scanf("%d",&x);
              head=insert_at_beginning(head,x);
              printlist(head);
              break;
          case 2:
              printf("Enter data:");
              scanf("%d",&x);
              head=insert_at_last(head,x);
              printlist(head);
              break;
          case 3:{
              printf("Enter data:");
              scanf("%d",&x);
              printf("Enter position:");
              scanf("%d",&pos);
              head=insert_at_given_position(head,x,pos);
              printlist(head);
              break;
          }
          case 4:{
              head=delete_at_starting(head);
              printlist(head);
              break;
          }
          case 5:
                head=delete_at_last(head);
                printlist(head);
                break;
          case 6:{
              printf("Enter position:");
              scanf("%d",&pos);
              head=delete_at_given_position(head,pos);
              printlist(head);
              break;
          }
          case 7:{
              search_last_node(head);
              printlist(head);
              break;
          }
          case 8:{
              bool b=search_is_loop_existed(head);
              printlist(head);
              break;
          }
          case 9:{
              search_is_circular_linkedlist(head);
              break;
          }
          case 10:{
              printf("Enter position:");
              scanf("%d",&pos);
              find_node_at_given_pos(head,pos);
              break;
          }
          case 11:{
              head=find_middle_node(head);
            //   printlist(head);// here dont use, because from middle node all nodes are printing
              break;
          }
          case 12:{
              head=reversing_linkedlist(head);
              printlist(head); 
              break;
          }
          case 13:{
              printlist(head);
              break;
          }
          case 14:{
              printf("Enter position:");
              scanf("%d",&pos);
             head=delete_node_at_given_pos_from_last(head,pos);
             printlist(head);
             break;
          }
          case 15:{
              int count=count_noof_nodes_in_list(head);
              printf("noof nodes are %d",count);
              break;
          }
        //   case 16:{
        //       //by passing particular address, we can delete.we cont delete last node in list
        //       delete_given_node_without_passing_headnode(node);
        //     //   printlist(head);
        //   }
          case 17:{
              exit(0);
              break;
          }
          default:{
              printf("\nSelect valid option\n");
          }
      }
  }

  return 0;
}

//-----------------------------------------------

// void delete_given_node_without_passing_headnode(struct node* node){
//     if(node==NULL || node->next==NULL){
//         printf("deletion cant be done");
//         return;
//     }
//     struct node* temp;
//     temp=node->next;
//     node->data=temp->data;
//     node->next=temp->next;
//     free(temp);
//     // temp=NULL;
//     return;
// }

struct node* reversing_linkedlist(struct node* head){
    struct node* prev=NULL,*nextN=NULL,*cur=head;
    if(head==NULL){
        printf("list is empty");
        return NULL;
    }
    while(cur!=NULL){
        nextN=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nextN;
    }
    head=prev;
    return head;
}

int count_noof_nodes_in_list(struct node* head){
    struct node* ptr=head;
    int count=0;
    while(ptr!=NULL){
        ptr=ptr->next;
        count++;
    }
    return count;
}

struct node* delete_node_at_given_pos_from_last(struct node* head,int pos){
    if(head==NULL){
        printf("list is empty");
        return NULL;
    }
    struct node* ptr1=head;
    struct node* ptr2=head;
    struct node* prev;
    int count=0;
    while(count<pos){
        ptr2=ptr2->next;
        count++;
    }
    while(ptr2 != NULL){
        prev=ptr1;
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    printf("node at given position from END is %d",ptr1->data);
    prev->next=ptr1->next;
    free(ptr1);
    ptr1=NULL;
    printf("node at given position from END is deleted");
    return head;
}

void find_node_at_given_pos(struct node* head,int pos){
    if(head==NULL){
        printf("list is empty");
        return;
    }
    if(pos<0){
        printf("invalid position");
        return;
    }
    struct node* ptr=head;
    int count=0;
    while(ptr != NULL && count<pos){
        ptr=ptr->next;
        count++;
    }
    if(ptr==NULL){
        printf("we cant find node at given position,position is out of nodes");
        return;
    }
    printf("node at given position is %d ",ptr->data);
}

void search_is_circular_linkedlist(struct node* head){
    struct node* ptr=head;
    while(ptr!=NULL){
        ptr=ptr->next;
        if(ptr==head){
            printf("Loop found,it is circular linked list");
            // break;
        }
    }
    printf("Loop is not circular");
}


bool search_is_loop_existed(struct node* head){
    struct node* ptr1=head;
    struct node* ptr2=head;
    if(head==NULL){
        printf("list is empty");
        return false;
    }
    while(ptr2!=NULL && ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
        if(ptr1==ptr2){
            printf("loop is found");
            return true;
        }
    }
    printf("loop not found");
    return false;
}

void search_last_node(struct node* head){
   if(head==NULL) {
       printf("list is empty");
   }
//   struct node* ptr=head;
//   while(ptr->next!=NULL){
//       ptr=ptr->next;
//   }
//   printf("last node is = %d",ptr->data);
    
    //another way
    struct node* ptr=head;
    struct node* prev=head;
    while(ptr!=NULL && ptr->next!=NULL){
        prev=ptr->next;
        ptr=ptr->next->next;
    }
    if(ptr==NULL){
        printf("last node is: %d",prev->data);
    }else{
        printf("last node is: %d",ptr->data);
    }
}

struct node* find_middle_node(struct node* head){
    if(head==NULL){
        printf("list is empty , operations cant performed");
        return head;
    }
    struct node* ptr1=head;
    struct node* ptr2=head;
    while(ptr2!=NULL && ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
    }
    printf("middle node is : %d",ptr1->data);
    // it is good to use void-returntype,because whenever we are returning back the head will give some elements only because,it is traversing and giving reamianing values back to head
    return ptr1;
}

struct node* delete_at_given_position(struct node* head,int pos){
    if(head==NULL){
        printf("list is empty , operations cant performed");
        return head;
    }
    struct node* ptr=head;
    if(pos==1){
        head=head->next;
        free(ptr);
        ptr=NULL;
        printf("deleted item at given position");
        return head;
    }
    int count=1;
    while(ptr!=NULL && count<pos-1){
        ptr=ptr->next;
        count++;
    }
    if(ptr==NULL){
        printf("we cont delete node,because given position  is out of range ");
        return head;
    }
    struct node * temp=ptr->next->next;
    free(ptr->next);
    ptr->next=temp;
    return head;
}

struct node* delete_at_last(struct node* head){
    if(head==NULL){
        printf("list is empty , operations cant performed");
        return head;
    }
    struct node* ptr=head;
    struct node* prev=head;
    while(ptr->next!=NULL){
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next=NULL;
    free(ptr);
    ptr=NULL;//avoid dangling pointer
    printf("deleted item at last");
    return head;
    
    //another way
    // if(head==NULL){
    //     printf("list is empty , operations cant performed");
    //     return head;
    // }
    // if(head->next==NULL){
    //     free(head);
    //     head=NULL;
    //     printf("deleted item at last");
    //     return head;
    // }
    // struct node* ptr=head;
    // while(ptr->next->next !=NULL){
    //     ptr=ptr->next;
    // }
    // free(ptr->next);
    // ptr->next=NULL;
    // printf("deleted item at last");
    // return head;  
}

struct node* delete_at_starting(struct node* head){
    if(head==NULL){
        printf("list is empty , operations cant performed");
        return head;
    }
    struct node* ptr=head;
    head=head->next;
    free(ptr);
    ptr=NULL;
    printf("deleted item at starting/head");
    return head;
   
}

void printlist(struct node* head){
    struct node* p=head;
    if(p==NULL){
        printf("\nlist is empty\n");
    }else{
        printf("\n====== Printing values ======\n");
        while(p!=NULL){
            printf("%d  ",p->data);
            p=p->next;
        }
    }
}
struct node* insert_at_beginning(struct node* head,int x){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("memory not allocated");
        return NULL;
    }
    newnode->data=x;
    newnode->next=NULL;
    newnode->next=head;
    head=newnode;
    return head;
    printf("item inserted");
}

struct node* insert_at_last(struct node* head,int x){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("memory not allocation failed");
        return NULL;
    }
    newnode->data=x;
    // newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        // newnode->next=NULL;
        printf("item inserted at last");
        return head;
    }
    struct node* ptr=head;
    while(ptr->next !=NULL){
        ptr=ptr->next;
    }
    ptr->next=newnode;
    printf("item inserted at last");
    return head;
}

struct node* insert_at_given_position(struct node* head,int x,int pos){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(newnode==NULL){
        printf("memory allocation failed");
        return NULL;
    }
    if(head==NULL){
        if(pos==1){
            head=newnode;
            printf("item inserted at given position");
            return head;
        }else{
            printf("current linked list is empty,we cannot insert node at given position");
        }
    }
    if(pos==1){
        newnode->next=head;
        head=newnode;
        printf("item inserted at given position");
        return head;
    }
    struct node* ptr=head;
    int count=1;
    while(ptr!=NULL && count<pos-1){
        ptr=ptr->next;
        count++;        
    }    
    if(ptr==NULL){
        printf("we cant insert node,because position is out of range");
        return head;
    }
    newnode->next=ptr->next;
    ptr->next=newnode;
    printf("item inserted at given position");
    return head;
}



// void search_last_node(){
//     printf("hi-7");
// }
// void search_is_loop_existed(){
//     printf("hi-8");
// }
// void search_is_circular_linkedlist(){
//     printf("hi-9");
// }
// void find_middle_node(){
//     printf("hi-10");
// }
// void reversing_linkedlist(){
//     printf("hi-11");
// }
