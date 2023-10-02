#include<stdio.h>
#include<string.h>

int main(){
	int i, end, len1;
	char s1[1000], s2[1000];
	
	printf("Enter a string to reverse: ");
	scanf("%s", &s1);
	
	len1 = strlen(s1);
	end = len1 - 1;
	
	for (i=0; i<len1; i++){
		s2[i] = s1[end];
		end--;
	}
	printf("%s", s2);
	return 0;
}
