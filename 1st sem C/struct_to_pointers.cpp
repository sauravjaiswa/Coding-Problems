//Passing structures through pointers
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	int r_no;
	char name[20];
	char course[20];
	int fees;
};
main()
{
	struct student stud1,stud2,*ptr_stud1,*ptr_stud2;
	ptr_stud1=&stud1;
	ptr_stud2=&stud2;
	ptr_stud1->r_no=01;
	strcpy(ptr_stud1->name,"Rahul");
	strcpy(ptr_stud1->course,"BCA");
	ptr_stud1->fees=45000;
	printf("\nEnter the details of second student");
	printf("\nEnter the roll number");
	scanf("%d",&ptr_stud2->r_no);
	fflush(stdin);
	printf("Enter name");
	gets(ptr_stud2->name);
	fflush(stdin);
	printf("Enter course");
	gets(ptr_stud2->course);
	fflush(stdin);
	printf("Enter fees");
	scanf("%d",&ptr_stud2->fees);
	printf("\nDetails of first student");
	printf("\nRoll number %d",ptr_stud1->r_no);
	printf("\nName %s",ptr_stud1->name);
	printf("\nCourse %s",ptr_stud1->course);
	printf("\nFees %d",ptr_stud1->fees);
	printf("\n__________________________");
	printf("\nDetails of second student");
	printf("\nRoll number %d",ptr_stud2->r_no);
	printf("\nName %s",ptr_stud2->name);
	printf("\nCourse %s",ptr_stud2->course);
	printf("\nFees %d",ptr_stud2->fees);
	printf("\n__________________________");
}
