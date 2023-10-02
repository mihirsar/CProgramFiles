#include<stdio.h>
#include<string.h>

int main(){
	int i, len1;
	char s1[1000], s2[1000];
	
	printf("Enter a string: ");
	scanf("%s", &s1);
	
	printf("Enter another string: ");
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
	
	return 0;
}
