#include<stdio.h>
int str_len(char s[]){
    int count = 0;
    while(s!="\0"){
        count++;
    }
    return count;
}

void main(){
    char st[10] = "string1234";
    int len = str_len(st);
    printf("%d", len);
    
}