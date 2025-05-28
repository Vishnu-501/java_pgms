#include<stdio.h>
 //replace bits between given positions 
 int replace_bits_at_given_range(int n,int p1,int p2){
    for(int i=p1;i<=p2;i++){
        n=n|(1<<i);  //set(1) all bits between p1&p2
        // n=n&~(1<<i);//unset(0) all bits between p1&p2
        // n=n^(1<<i);//toggle(reverse) all bits between p1&p2
    }
    int bit;
    for(int i=31;i>=0;i--){
        bit=n>>i;
        if(bit&1){
            printf("1");
        }else{
            printf("0");
        }
    }
 }
 int main(){
    int num=25,p1=2,p2=8;
    
    printf("\n");
    int bit;
    for(int i=31;i>=0;i--){
        bit=num>>i;
        if(bit&1){
            printf("1");
        }else{
            printf("0");
        }
    }
      printf("\n");
    int res= replace_bits_at_given_range(num,p1,p2);
    printf("\n%d",res);
    
 }