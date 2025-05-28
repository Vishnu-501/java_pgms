#include<stdio.h>
int main(){
    int arr[]={7,8,2,10,9,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                arr[i]=arr[i]^arr[j];
                arr[j]=arr[i]^arr[j];
                arr[i]=arr[i]^arr[j];
            }
        }
        printf("i=%d\n",i);
    }
    printf("Ascending order:\n[");
    for(int i=0;i<size;i++){
        printf(" %d  ",arr[i]);
    }
    printf("]\n--------------------------------\n");
    // printf("%d",*arr);  //pointing to index arr[0] 
    
    int b[]={7,8,2,10,9,1};
    int  size2=sizeof(b)/sizeof(b[0]);
    for(int i=0;i<size2;i++){
        for(int j=i+1;j<size2;j++){
            if(b[j]>b[i]){
                b[i]=b[i]^b[j];
                b[j]=b[i]^b[j];
                b[i]=b[i]^b[j];
            }
        }
    }
    printf("Descending order:\n[");
    for(int i=0;i<size2;i++){
        printf(" %d  ",b[i]);
    }
    printf("]");
    return 0;
}

