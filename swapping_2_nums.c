#include<stdio.h>

int main(){
    //swapping 2 numbers using bitwise X-OR operator.
    //without 3rd variable
    int a=10,b=20;
    printf("before swapping:  a=%d   b=%d \n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after swapping:  a=%d   b=%d  \n",a,b);
    
    //using 3rd variable
    printf("------------------------------\nusing 3rd variable\n");
    int x=50,y=100;
    printf("before swapping:  x=%d   y=%d \n",x,y);
    int temp=x;
    x=y;
    y=temp;
    printf("after swapping:  x=%d   y=%d",x,y);

}
