//declare an array of pointers and print the values which are there inside the array.
#include<stdio.h>
main()
{
	char *a[]={"abc","cde","efg"};
	int i;
	printf("%c\n",a[0][0]);
	for(i=0;i<3;i++)
	printf("%s\n",*(a+i));
}
