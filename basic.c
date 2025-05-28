#include<stdio.h>
void main(){

    int arr[5]={2,3,4,5,6};
    printf("%d  %d  %d\n",&arr,&arr[0],arr);
    int *ptr;
    ptr=&arr[0];
    printf("%p  %p  ",ptr,ptr+1);
    printf("arr[0] is  %d",*(ptr+4));
    



















//    int a[6];
//    int  size=sizeof(a)/sizeof(a[0]);
//     for(int i=0;i<size;i++){
//         printf("enter a[%d] value: ",i);
//         scanf("%d",&a[i]);
//     }
//     for (int i = 0; i < size; i++)
//     {
//         printf("a[%d]=%d\n",i,a[i]);
//     }
    
}