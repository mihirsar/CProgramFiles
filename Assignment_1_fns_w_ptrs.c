#include<stdio.h>
int length(char s[500]);

int main(){
    char str[500]="Hello";
    int leng = length(str);
    printf("%d", leng);
    return 0;
}

int length(char s[500]){
    int i, cnt=0;
    for(i=0; s[i]!=0; i++){
        cnt++;
    }
    return cnt;
}