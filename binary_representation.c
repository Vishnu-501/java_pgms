#include<stdio.h>
 //binary representation of given number
 void binary_representation_given_num11(int n){
     int bit;
     for(int i=31;i>=0;i--){
         bit=n>>i;
         if(bit&1){
             printf("1");
         }else{
             printf("0");
         }
     }
     return;
 }
 void binary_representation_given_num22(int n){
     unsigned int i;
     for(i=1<<31;i>0;i=i/2){
         (n&i)?printf("1"):printf("0");
     }
    //  return;
 }
 int main(){
    int num=10;
    binary_representation_given_num11(num);
    printf("\n--------------\nanother way\n");
    binary_representation_given_num22(num);
 }