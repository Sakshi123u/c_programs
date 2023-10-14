#include<stdio.h>
	struct student{
		int rollno;
		char name[50];
		int ph;
	};
	int main(){
	  	struct student a[5];
	  	for(int i=0;i<5;i++){
		printf("enter student info\n");
		printf("enter roll no");
		scanf("%d",&a[i].rollno);
		printf("name");
		scanf("%s",a[i].name);
		printf("enter phone no");
		scanf("%d",&a[i].ph);
		}
		return 0;
	}
