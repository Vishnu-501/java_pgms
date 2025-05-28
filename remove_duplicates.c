#include<stdio.h>
int main(){
    //removing duplicates from sorted elements
    int arr[9]={1,2,2,3,4,4,4,5,5};
    int j=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("size is: %d\n",size);
    for(int i=0;i<size-1;i++){
        if(arr[i] != arr[i+1]){
            arr[j]=arr[i];
            j++;
        }
    }
    arr[j]=arr[size-1];
    // j++;
    for(int i=0;i<=j;i++){
        printf("%d  ",arr[i]);
    }
}