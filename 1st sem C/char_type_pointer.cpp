//character pointer array
/*abc
abc
bcd
cde
a
6487600*/
#include<stdio.h>
main()
{
	char *p[]={"abc","bcd","cde"};    //it makes 2d array of 3 1d character arrays
	printf("%s \n",p[0]);             //gives abc
	for(int i=0;i<3;i++)
	printf("%s \n",*(p+i));
	printf("%c \n",p[0][0]);           //Gives 'a'
	printf("%d",p);           //p stores base address of array
}
