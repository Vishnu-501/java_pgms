#include <stdio.h>
#include <stdbool.h>
int set_bit_at_given_pos(int num,int pos){
     num=num|(1<<pos);
    return num;
}
int unset_bit_at_given_pos(int num,int pos){
    // num=num&~(1<<pos);
    return num & ~(1<<pos);
}
int toggle_bit_at_given_pos(int num,int pos){
    num=num^(1<<pos);
    return num;
}
bool is_bit_set_or_unset_at_pos(int num,int pos){
    if(num&(1<<pos)){
        printf("bit is 1 at given position");
        return true;
    }else{
        printf("bit is 0 at given position");
        return false;
    }
}
int main() {
    //set,unset,toggle,test   bit at given position
    
    //set
    int n=31;
    printf("*** set ***\nn value is: %d",n);
    int a= set_bit_at_given_pos(n,6);
    printf("\na is %d",a);
    int b= set_bit_at_given_pos(n,4);
    // printf("\na is %d\n",a);
    printf("\nb is %d\n",b);
    
    printf("-------------------------------\n*** unset ***\n");
    //unset
    int n1=15;
    printf("n1 value is: %d\n",n1);
    int c=unset_bit_at_given_pos(n1,3);
    printf("result is: %d\n",c);
    
    printf("-------------------------------\n*** toggle ***\n");
    //toggle
    int n2=15;
    printf("n2 value is: %d\n",n2);
    int d=toggle_bit_at_given_pos(n2,3);
    printf("result is: %d",d);
    
    printf("\n-------------------------------\n*** test ***\n");
    //test
    int n3=15;
    printf("n3 value is: %d\n",n3);
    bool e=is_bit_set_or_unset_at_pos(n3,5);
    printf("\nresult is: %d",e);


}