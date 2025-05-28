#include<stdio.h>
 // find given machine is little endian or big endian
 int main(){
     int x=1;
     char *ptr=(char*)&x;
     if(*ptr){
         printf("machine is little endian");
     }else{
         printf("machine is big endian");
     }
     
     printf("\n--------------------\nconvert little endian to big endian or vice versa\n");
     int y=0x12345678;
     printf("y value:%d  \n",y);
     printf("y hexa-decimal value:%x  \n",y);
     
     y= (y<<24&0xff000000) | (y<<8&0x00ff0000) | (y>>8&0x0000ff00) | (y>>24&0x000000ff) ;
     printf("after swapping/converting y hexa-decimal value:%x  \n",y);
     printf("after swapping/converting y value:%d  \n",y);
     
     printf("\n--------------------\nnibble swapping\n");
     int s=165;
     printf("%x \n",s);
     s=(s<<4&0xf0) | (s>>4&0x0f);
     printf("%x",s);
 }