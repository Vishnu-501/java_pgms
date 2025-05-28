#include<stdio.h>
int main(){
 
//  int s;
//  printf("enter size of array: ");
//  scanf("%d",s);
//  int a[s];

 int a[5];//declaration
 int size=sizeof(a)/sizeof(a[0]);//size of array
 printf("size of array  a:%d\n",size);
 
 //initialization dynamically
 for(int i=0;i<size;i++){
     printf("Enter a[%d] value: ",i);
     scanf("%d",&a[i]);
 }
 printf("-------------------------\n");
 //printing elements
 for(int j=0;j<size;j++){
     printf("a[%d] is %d  \n",j,a[j]);
 }
 printf("-------------------------\n");
 int l1,l2;
printf("%d  %d\n",l1,l2);//printing garbage value
l1=a[0];
l2=a[1];
 
//  finding 1st highest & 2nd highest values
//  without using other variables

printf("a[0] is %d, a[1] is  %d\n",a[0],a[1]);
if(a[1]>a[0]){
    a[0]=a[0]^a[1];
    a[1]=a[0]^a[1];
    a[0]=a[0]^a[1];
}
printf("a[0] is %d, a[1] is  %d\n",a[0],a[1]);
for(int i=2;i<size;i++){
    if(a[i]>a[0]){
        a[1]=a[0];
        a[0]=a[i];
    }
    else if(a[i]>a[1]){
        a[1]=a[i];
    }
}
printf("1st highest is %d, 2nd highest is %d",a[0],a[1]);

// finding 1st lowest & 2nd lowest values
// using other variables
printf("\n -------------------------------------\n");
// int l1,l2;
// printf("%d  %d\n",l1,l2);//printing garbage value
// l1=a[0];
// l2=a[1];
printf("l1=%d   l2=%d\n",l1,l2);
if(l2<l1){
    l1=l1^l2;
    l2=l1^l2;
    l1=l1^l2;
}
printf("l1=%d   l2=%d\n",l1,l2);
for(int i=2;i<size;i++){
    if(a[i]<l1){
        l2=l1;
        l1=a[i];
    }
    else if(a[i]<l2){
        l2=a[i];
    }
}
printf("1st lowest is %d, 2nd lowest is %d",l1,l2);
}