//compare string
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{	
    int i,f;
	char s1[]="hello";
	char s2[]="Nello";
	i=0;
	f=0;
	if(strlen(s1)==strlen(s2))
	{
	while(s1[i]!='\0')
	{
		if(s1[i]==s2[i])
		f=1;
		else
		{
		f=0;
		break;
	}
		i++;
	}
}
	if(f==1)
	printf("Strings are equal.");
	else
	printf("Strings are not equal.");
}
