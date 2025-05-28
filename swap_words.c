#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse_string(char *start,char *end){
    while(start<end){
        *start=*start^*end;
        *end=*start^*end;
        *start=*start^*end;
        start++;
        end--;
    }
}
void reverse_words(char str[]){
    char *wordbegin=str;
    char *ptr=str;
    while(*ptr!='\0'){
        ptr++;
        if(*ptr=='\0'){
            reverse_string(wordbegin,ptr-1);
        }else if(*ptr==' '){
            reverse_string(wordbegin,ptr-1);
            wordbegin=ptr+1;
        }
    }
    reverse_string(str,ptr-1);
}



int main() {  
    // swap words
    char str[]="how are you vishnu reddy";
    reverse_words(str);
    printf("%s",str);
//   return 0;

// palindrome
char str[]="madam";
int length=0;
while(str[length]!='\0'){
    length++;
}
int i=0,j=length-1;
while(i<j){
    if(str[i]!=str[j]){
        printf("string is not palindrome");
        return 0;
    }
    i++;
    j--;
}
printf("string is palindrome");

}