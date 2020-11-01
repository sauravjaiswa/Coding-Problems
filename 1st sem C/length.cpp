//Calculate length of string.
#include<stdio.h>
#include<string.h>
main()
{
	char s[]="hi how are you";
	int i=0;
	while(s[i]!='\0')
	{
		i++;
	}
	printf("length of %s is %d.",s,i);
	int x=strlen(s);     //strlen() is used to directly give the length of string
	printf("\n%d",x);
}
