/*Write a program in C to illustrate string operations without using the library functions. Verify the
operations using in-built functions. A. With pointers to arrays b. Without pointers to arrays
1. Substring, 2. Palindrome, 3. Compares, 4. Copy, 5. Reverse*/

//substring
#include<stdio.h>
#include<string.h>
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