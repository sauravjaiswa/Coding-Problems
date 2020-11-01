//Structures 2
//NESTED STRUCTURES
#include<stdio.h>
int main()
{
	typedef int INT;
	typedef char CHAR;
	typedef float FLOAT;
	typedef struct DOB
	{
		INT d;
		INT m;
		INT yr;
	}d;
	typedef struct student
	{
		CHAR name[20];
		d date;
	};
	student s;
		printf("Enter name");
		scanf("%s",&s.name);
		printf("Enter day");
		scanf("%d",&s.date.d);
		printf("\nEnter month:");
		scanf("%d",&s.date.m);
		printf("\nEnter year:");
		scanf("%d",&s.date.yr);
		printf("\n%s %d %d %d",s.name,s.date.d,s.date.m,s.date.yr);
}
