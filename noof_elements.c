#include<stdio.h>
int main(){
    int x[4];
    int length=sizeof(x)/sizeof(x[0]);
    printf("no.of elements in array is %d",length);
}