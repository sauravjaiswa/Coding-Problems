//concatenate
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{	
    int n;
	char s1[]="hi how";
	char s2[]="are you?";
	n=strlen(s1)+strlen(s2)+2;
	char s3[n];
	int i,j;
	i=j=0;
	while(s1[i]!='\0')
	{
		s3[j]=s1[i];
		i++;
		j++;
	}
	s3[j]=' ';
	j++;
	i=0;
	while(s2[i]!='\0')
	{
		s3[j]=s2[i];
		i++;
		j++;
	}
	s3[j]='\0';
	puts(s3);
}
