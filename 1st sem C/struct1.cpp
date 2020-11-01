//Structures
#include<stdio.h>
int main()
{
	int i;
	typedef int INT;
	typedef char CHAR;
	typedef float FLOAT;
	typedef struct student
	{
		INT roll;
		CHAR name[20];
		FLOAT marks;
	};
	student s[3];
	for(i=0;i<3;i++)
	{
		printf("\nEnter roll number of students:");
		scanf("%d",&s[i].roll);
		fflush(stdin);
		printf("Enter name of students:");
		scanf("%s",&s[i].name);
		printf("\nEnter marks of students:");
		scanf("%f",&s[i].marks);
	}
	printf("\nname\troll no.\tmarks");
	for(i=0;i<3;i++)
	{
		printf("\n%s\t\t%d\t%f ",s[i].name,s[i].roll,s[i].marks);
	}
}
