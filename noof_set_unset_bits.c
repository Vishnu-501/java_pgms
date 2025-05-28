#include<stdio.h>
 //find no.of set or unset bits in given number
 int find_set_bits_in_givennumber(int n){
     int m=n;
     int on_count=0;
     int off_count=0;
     while(n){
         on_count++;
         n=n&(n-1);
     }
     off_count=8*sizeof(n)-on_count;//8*4=32; //32-oncount=result;
     printf("off_count of given number %d is: %d\n",m,off_count);
     return on_count;
 }
 int main(){
     int n;
     printf("Enter n value: ");
     scanf("%d",&n);
     printf("on_count of given number %d is: %d",n,find_set_bits_in_givennumber(n));
 }