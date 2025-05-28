#include<stdio.h>
int main(){
    int x=300;
    if(x & x-1){
        printf("not power of 2");
    }else{
        printf("num is power of 2");
    }
}