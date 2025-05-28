#include<stdio.h>
 //swap bits at given position
 int swap_bits_at_given_pos(int n,int p1,int p2){
     if(  ((n&(1<<p1))>>p1) ^ ((n&(1<<p2))>>p2 )){
         n=n^(1<<p1);
         printf("%d\n",n);
         n=n^(1<<p2);
         printf("%d\n",n);
     }
     return n;
 }
 int main(){
    int num=25,p1=3,p2=5;
    int res= swap_bits_at_given_pos(num,p1,p2);
    printf("\n%d",res);
    
 }