#include<stdio.h>
#include<string.h>
//substring
int main(){
	char s1[100], s2[100];
	int i,j,len1;
	
	printf("Enter a string:");
	scanf("%s", &s1);
	
	printf("Enter a string:");
	scanf("%s", &s2);
	
	len1 = strlen(s1);
	
	for (i=0; i<len1; i++){
		if (s1[i] == s2[i]){
			printf("String is same.\n");
			break;
		}
		else{
			printf("String is not same.\n");
			break;
		}
	}
	
}
