#include<stdio.h>
#include<string.h>
struct student{
	int rollno;
	float cgpa;
	char name[100];
};
int main(){
	struct student s1;
	s1.rollno = 10528;
	s1.cgpa = 8.75;
	strcpy(s1.name, "Mihir");
	
	struct student s2;
	s2.rollno = 10530;
	s2.cgpa = 10;
	strcpy(s2.name, "Shants");
	
	struct student s3;
	s3.rollno = 10534;
	s3.cgpa = 8.34;
	strcpy(s3.name, "Yatin");
}
