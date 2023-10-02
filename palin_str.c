#include<stdio.h>
#include<string.h>
//palindrome

int main(){
	char s1[1000], s2[1000];
	int i, j, len1, end1;

	printf("Enter a string: ");
	scanf("%s", &s1);

	len1 = strlen(s1);
	end1 = len1 - 1;

	for (i=0; i<len1; i++){
		s2[i] = s1[end1];
		end1--;
	}

	for (j=0; j<len1; j++){
	if (s1[j] == s2[j]){
		printf("String is palindrome.\n");
		break;
	}
	else{
		printf("String is not palindrome.\n");
		break;
	}
	}

	return 0;
}
