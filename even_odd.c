// Online C compiler to run C program online
#include <stdio.h>

int main() {
   // given num is even or odd
   int num1=143;
   if(num1%2==0){
       printf("given num is even");
   }else{
       printf("given num is odd\n");
   }
   
   // using bitwise operator
   printf("---------------------\nusing bitwise operator\n");
   int num2=14;
   if(num2&1){
       printf("given num is odd");
   }else{
       printf("given num is even");
   }
}