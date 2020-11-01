//pointer array
/*6487600
 6487600
 6487600
 6487600
6487608
 6487608
 6487608
 6487608
1
2
3
12
34*/
#include<stdio.h>
main()
{
	int a[2][2]={{1,2},{3,4}};
	//int *p[]=a;     it is incorrect for 2d array unlike 1d array
	//int (*p)[2]=a;          //pointer to 2d array (*p)+[n] where n is no.of elements
	/*Array of pointers is represented as int *p[3]
	        OR
	Array of pointers of char type is represented as char *p[]={"abc","bcd","cde"};
	        OR
	char *pa={hello, how are you"}   1d array
	If a pointer has to point to a 2d array it would point as (*p)[2]=a; where 2d array is a[2][2] */
	int (*p)[2]=a;
	printf("%d",p);                          //Address of 1st 1d array.
	printf("\n %d",p[0]);
	printf("\n %d",&p[0]);
	printf("\n %d",&p[0][0]);
	printf("\n%d",p+1);                          //Address of 2nd 1d array.
	printf("\n %d",p[1]);
	printf("\n %d",&p[1]);
	printf("\n %d",&p[1][0]);
	/*a[i]=> *(a+i)
	a[i][j]=>*(*(p+i)+j)*/
	printf("\n%d",*(*p));     //points address of 1st element of 1st 1d array
	printf("\n%d",*(*p+1));   //points address of 2nd element of 1st 1d array
	printf("\n%d\n",*(*(p+1)));  //points address of 1st element of 2nd 1d array
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		printf("%d",*(*(p+i)+j));
		printf("\n");
	}
}
