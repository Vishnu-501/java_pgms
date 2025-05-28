#include <stdio.h>
#include <string.h>
// #include <strlib.h>

int main() {
    //strlen()
    //using inbuilt functions(used for char array,char pointr)
    // char str1[5]="hari";
    // char *str2="haritha";
    // printf("string1 is: %s \n",str1);
    // printf("%d  %d \n",sizeof(str1),strlen(str1));
    // printf("string2 is: %s \n",str2);
    // printf("%d  %d \n",sizeof(str2),strlen(str2));
    //without using inbuilt functions
    //char array
    // int length=0,i;
    // for(i=0;str1[i]!='\0';i++){
    //     length++;
    // }
    // printf("%d %d %d",sizeof(str1),length,i);
    //without using inbuilt functions
    //char pointer
    // int length=0;
    // char *s=str2;
    // while(*str2!='\0'){
    //     length++;
    //     str2++;
    // }
    // printf("%d %d %s",sizeof(str2),length,s);
    
    //----------------------------------------------
    
    //strcpy()
    //using inbuit function
    // char str1[]="haritha";
    // char str2[sizeof(str1)];
    // strcpy(str2,str1);
    // printf("%s  %s \n",str1,str2);
    // //without inbuilt, using char array
    // int i;
    // for(i=0;str1[i]!='\0';i++){
    //     str2[i]=str1[i];
    // }
    // str2[i]='\0';
    // printf("%s  %s",str1,str2); 
    //without inbuilt, using char pointer
    // char *str1="haritha";
    // char *str2=(char *)malloc(strlen(str1)+1*sizeof(char));
    // char *s1=str1;
    // char *s2=str2;
    // while(*str1 !='\0'){
    //     *str2=*str1;
    //     str1++;
    //     str2++;
    // }
    // *str2='\0';
    // printf("%s %s",s1,s2);

      //-----------------------------------------------
    
    //strcat()
    //using inbuilt function
    // char str1[5]="hari";
    // char str2[20]="vishnu";
    // strcat(str2,str1);
    // printf("%s %s",str1,str2);
    
    // without using inbuilt function
    //char array
    // char str1[5]="hari";
    // char str2[20]="vishnu";
    // int i=0,j=0;
    // while(str2[i]!='\0'){
    //     i++;
    // }
    // while(str1[j]!='\0'){
    //     str2[i]=str1[j];
    //     i++;
    //     j++;
    // }
    // str2[i]='\0';
    // printf("%s %s",str1,str2);
    
    //char pointer
    // char *str1="hari";
    // char *str2="haritha";
    // char *s2=(char *)malloc( (strlen(str1)+strlen(str2)+1) * sizeof(char) );
    // char *s1=s2;
    // printf(" %s %d %d %s \n",str1,sizeof(s1),sizeof(s2),str2);
    // while(*str2!='\0'){
    //     *s2=*str2;
    //     s2++;
    //     str2++;
    // }
    // while(*str1 != '\0'){
    //     *s2=*str1;
    //     s2++;
    //     str1++;
    // }
    // *s2='\0';
    // printf("%s   %s",s1,s2);


      //-------------------------------------------------
  
//  strcmp()
//  using inbuilt function
//   char str1[20]="visnu";
//   char str2[20]="vishnu";
//   int rv=strcmp(str1,str2);
//   if(rv==0){
//       printf("both strings are equal");
//   }else{
//       printf("both strings are not equal %d",rv);
//   }
  
  // using char array
//   char str1[20]="visnu";
//   char str2[20]="vishnu";
  
//   int i=0,temp=0;
//   while(str1[i]!='\0' || str2[i]!='\0'){
//       if(str1[i]!=str2[i]){
//           temp=1;
//           break;
//       }
//       i++;
//   }
//   if(temp==0){
//       printf("both strings are equal");
//   }else{
//       printf("both strings are not equal %d",temp);
//   }
  
  // using char pointer
//   char *str1="voshnu";
//   char *str2="vishnu";
  
//   int d=0,temp=0;
//   while(*str1!='\0' || *str2!='\0'){
//       if(*str1!=*str2){
//           d=str1-str2;
//           temp=1;
//           break;
//       }
//       str1++;
//       str2++;
//   }
//   if(temp==0){
//       printf("both strings are equal");
//   }else{
//       printf("both strings are not equal %d",d);
//   }
   
   //compare n-noof characters
//   char str1[12]="vishj";
//   char str2[12]="vishnu";
   
//   int rv=strncmp(str1,str2,strlen(str1));
//   if(rv==0){
//         printf("both strings are equal");
//   }else{
//       printf("both strings are not equal %d",rv);
//   }

    //-------------------------------------------
    
    // strrev(),using inbuilt function
    // char str[10]="vishnu";
    // printf("%s",strrev(str));
    // return 0;
   
   //using char array
//   char str[10]="haritha";
// //   printf("%s",str);
//     int length=0,i=0,j;
//     while(str[length]!='\0'){
//         length++;
//     }
//     j=length-1;
//     while(i<j){
//         str[i]=str[i]^str[j];
//         str[j]=str[i]^str[j];
//         str[i]=str[i]^str[j];
//         i++;
//         j--;
//     }
//     printf("%s",str);
   
   //using pointer
//    char str[]="ramu";
//    char *ch=str;
//    char *start=str; 
//    char *end=str;
//    printf("%s",end); 
//    while(*end!='\0'){
//        end++;
//    }
   
//    end--;
//    while(start<end){
//        *start=*start ^ *end;
//        *end=*start ^ *end;
//        *start=*start  ^ *end;
//        start++;
//        end--;
//    }
//     printf("\n%s",str);



}