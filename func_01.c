#include<stdio.h>

int main(){
	int num1, num2, res,res_1;
	printf("Enter 2 num: ");
	scanf("%d %d", &num1,&num2);
	
	res = mult(num1, num2);
	res_1 = div(num1, num2);
	printf("Product is: %d and quotient is: %d", res, res_1);
	
	return 0;	
}

int mult(int x, int y){
	int result;
	
	result = x*y;
	return result;
}

int div(int a, int b){
	int res1;
	res1 = a/b;
	return res1;
} 
