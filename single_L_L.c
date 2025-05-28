// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node *next;
// };
// struct node* head=NULL;
 
// // void printlist(struct node *head){
// //     struct node* p=head;
// //     while(p!=NULL){
// //         printf("%d  ",p->data);
// //         p=p->next;
// //     }
// // }
// // struct node* insert_at_starting(struct node* head,int x){
// //     struct node* newnode=(struct node*)malloc(sizeof(struct node));
// //     if(newnode==NULL){
// //         printf("memory allocation is failed");
// //         return NULL;
// //     }
// //     newnode->data=x;
// //     newnode->next=NULL;
// //     if(head=NULL){
// //         head=newnode;
// //         return head;
// //     }
// //     newnode->next=head;
// //     head=newnode;
// //     return head;
// // }
// // struct node* insert_at_end(struct node* head,int x){
// //     struct node* newnode=(struct node*)malloc(sizeof(struct node));
// //     if(newnode==NULL){
// //         printf("memory allocation is failed");
// //         return NULL;
// //     }
// //     newnode->data=x;
// //     newnode->next=NULL;
// //     if(head=NULL){
// //         head=newnode;
// //         return head;
// //     }
// //     struct node *temp=head;
// //     while(temp->next !=NULL){
// //         temp=temp->next;
// //     }
// //     temp->next=newnode;
// //     return head;
// // }
// // struct node* insert_at_given_pos(struct node*head,int pos,int x){
// //     struct node*newnode=(struct node*)malloc(sizeof(struct node));
// //     if(newnode==NULL){
// //         printf("memory allocation failed");
// //         return NULL;
// //     }
// //     newnode->data=x;
// //     newnode->next=NULL;
    
// // }
// void insert_at_beginning();
// void insert_at_last();
// void insert_at_given_position();
// void delete_at_starting();
// void delete_at_last();
// void delete_at_given_position();
// void search_last_node();
// void search_is_loop_existed();
// void search_is_circular_linkedlist();
// void find_middle_node();
// void reversing_linkedlist();

// int main() {
//    int choice=0;
//    while(choice !=13){
//        printf("----- choose any option -----\n");
//        printf("1) insert at beginning \n2)insert at end \n3)insert node at given position\n4)delete at starting \n5)delete node at end \n6)delete at given position\n7)search last node\n8)search is loop existed\n9)search is circular linkedlist\n10)find n-th node from starting and ending\n11)find middle node\n12)reversing linkedlist\n*****************************");
//        printf("\n Enter your choice:");
//        scanf("%d \n777",&choice);
       
//        switch(choice){
//            case 1:{
//                insert_at_beginning();
//                break;
//            }
//            case 2:{
//                insert_at_last();
//                printf("ghj");
//                break;
//            }
//            case 3:{
//                insert_at_given_position();
//                break;
//            }
//            case 4:{
//                delete_at_starting();
//                break;
//            }
//            case 5:
//                 delete_at_last();
//                 break;
//            case 6:{
//                delete_at_given_position();
//                break;
//            }
//            case 7:{
//                search_last_node();
//                break;
//            }
//            case 8:{
//                search_is_loop_existed();
//                break;
//            }
//            case 9:{
//                search_is_circular_linkedlist();
//                break;
//            }
//            case 10:{
//                printf("search n-th node from starting and ending");
//                break;
//            }
//            case 11:{
//                find_middle_node();
//                break;
//            }
//            case 12:{
//                reversing_linkedlist();
//                break;
//            }
//            default:{
//                printf("\nSelect valid option\n");
//            }
//        }
//    }
  
// }
// void insert_at_beginning(){
//     printf("hiii");
//     return;
// }
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* head=NULL;
 

// struct node* insert_at_starting(struct node* head,int x){
//     struct node* newnode=(struct node*)malloc(sizeof(struct node));
//     if(newnode==NULL){
//         printf("memory allocation is failed");
//         return NULL;
//     }
//     newnode->data=x;
//     newnode->next=NULL;
//     if(head=NULL){
//         head=newnode;
//         return head;
//     }
//     newnode->next=head;
//     head=newnode;
//     return head;
// }
// struct node* insert_at_end(struct node* head,int x){
//     struct node* newnode=(struct node*)malloc(sizeof(struct node));
//     if(newnode==NULL){
//         printf("memory allocation is failed");
//         return NULL;
//     }
//     newnode->data=x;
//     newnode->next=NULL;
//     if(head=NULL){
//         head=newnode;
//         return head;
//     }
//     struct node *temp=head;
//     while(temp->next !=NULL){
//         temp=temp->next;
//     }
//     temp->next=newnode;
//     return head;
// }
// struct node* insert_at_given_pos(struct node*head,int pos,int x){
//     struct node*newnode=(struct node*)malloc(sizeof(struct node));
//     if(newnode==NULL){
//         printf("memory allocation failed");
//         return NULL;
//     }
//     newnode->data=x;
//     newnode->next=NULL;
    
// }
//------------------------------------------------------------------
// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node *next;
// };
// struct node* head;
 


// void insert_at_beginning();
// void insert_at_last();
// void insert_at_given_position();
// void delete_at_starting();
// void delete_at_last();
// void delete_at_given_position();
// void search_last_node();
// void search_is_loop_existed();
// void search_is_circular_linkedlist();
// void find_middle_node();
// void reversing_linkedlist();
// void printlist();

// int main() {
    
//   int choice=0;
//   while(choice !=14){
//       printf("\n---------- choose any option -------\n");
//       printf("1)Insert at beginning \n2)Insert at end \n3)Insert node at given position\n4)Delete at starting \n5)Delete node at end \n6)Delete at given position\n7)Search last node\n8)search is loop existed\n9)search is circular linkedlist\n10)find n-th node from starting and ending\n11)find middle node\n12)reversing linkedlist\n13)printlist\n*****************************");
//       printf("\n==>Enter your choice:");
//       scanf("%d",&choice);
       
//       switch(choice){
//           case 1:
//               insert_at_beginning();
//               break;
//           case 2:
//               insert_at_last();
//               break;
//           case 3:{
//               insert_at_given_position();
//               break;
//           }
//           case 4:{
//               delete_at_starting();
//               break;
//           }
//           case 5:
//                 delete_at_last();
//                 break;
//           case 6:{
//               delete_at_given_position();
//               break;
//           }
//           case 7:{
//               search_last_node();
//               break;
//           }
//           case 8:{
//               search_is_loop_existed();
//               break;
//           }
//           case 9:{
//               search_is_circular_linkedlist();
//               break;
//           }
//           case 10:{
//               printf("search n-th node from starting and ending");
//               break;
//           }
//           case 11:{
//               find_middle_node();
//               break;
//           }
//           case 12:{
//               reversing_linkedlist();
//               break;
//           }
//           case 13:{
//               printlist();
//               break;
//           }
//         //   case 14:{
//         //       exit(0);
//         //       break;
//         //   }
//           default:{
//               printf("\nSelect valid option\n");
//           }
//       }
//   }

//   return 0;
// }

// //-----------------------------------------------

// void insert_at_beginning(){
//     int x;
//     struct node* newnode=(struct node*)malloc(sizeof(struct node));
//     if(newnode==NULL){
//         printf("memory not allocated");
//     }else{
//         printf("Enter data:");
//         scanf("%d",&x);
//         newnode->data=x;
//         newnode->next=head;
//         head=newnode;
//         printf("item inserted");
//     }
// }
// void insert_at_last(){
//     int x;
//     struct node* newnode=(struct node*)malloc(sizeof(struct node));
//     if(newnode==NULL){
//         printf("memory not allocation failed");
//     }else{
//         printf("\nEnter value: ");
//         scanf("%d", &x);
//         newnode->data=x;
//         newnode->next=NULL;
//         if(head==NULL){
//             head=newnode;
//             // newnode->next=NULL;
//             printf("item inserted");
//         }else{
//             struct node* ptr=head;
//             while(ptr->next !=NULL){
//                 ptr=ptr->next;
//             }
//             ptr->next=newnode;
//             printf("item inserted");
//             // printf("%d",newnode->next);

//         }
//     }
// }
// void insert_at_given_position(){
//     int x,pos;
//     struct node* newnode=(struct node*)malloc(sizeof(struct node));
//     if(newnode==NULL){
//         printf("memory allocation failed");
//     }else{
//         printf("enter value:");
//         scanf("%d",&x);
//         printf("enter position:");
//         scanf("%d",&pos);
//         newnode->data=x;
//         newnode->next=NULL;
//         if(head==NULL){
//             if(pos==1){
//                 head=newnode;
//                 printf("item inserted");
//             }else{
//                 printf("current linked list is empty,we cannot insert node at given position");
//             }
//         }else{
//             if(pos==1){
//                 newnode->next=head;
//                 head=newnode;
//                 printf("item inserted");
//             }
//                 struct node* ptr=head;
//                 for(int i=0;i<pos;i++){
//                     ptr=ptr->next;
//                     if(ptr==NULL){
//                         printf("we cant insert node,because position is out of range");
//                     }
//                 }
//                 newnode->next=ptr->next;
//                 ptr->next=newnode;
//                 printf("item inserted");
            
//         }
//         // printf("");
//     }
// }
// void delete_at_starting(){
//     printf("hi-4");
// }
// void delete_at_last(){
//     printf("hi-5");
// }
// void delete_at_given_position(){
//     printf("hi-6");
// }
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
// void printlist(){
//     struct node* p=head;
//     if(p==NULL){
//         printf("list is empty");
//     }else{
//         printf("\nPrinting values while (newnode!=NULL).\n");
//         while(p!=NULL){
//             printf("%d  ",p->data);
//             p=p->next;
//         }
//     }
// }
