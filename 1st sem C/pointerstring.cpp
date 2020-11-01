//Pointer Strings
#include<stdio.h>
main()
{
	char *p="abc";
	//*(p+1)='o';         //Invalid operation
	/*print the string p as you give the address to pointer so actually p is itself abc where abc is stored at*/
	printf("%s \n",p); //Prints the whole string
	printf(p); //Prints the whole string not required any formattted specifiers since p is itself a char type pointer
	printf("%c\n",p);  //Prints the first element of string only
}
