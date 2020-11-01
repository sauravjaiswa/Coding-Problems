//palindromic string
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{	
    int i,j;
	char s1[]="nan";
	char s2[strlen(s1)-1];
	i=0;
	j=strlen(s1)-1;
	while(s1[i]!='\0')
	{
		s2[j]=s1[i];
		i++;
		j--;
	}
	s2[j]='\0';
	if(strcmp(s1,s2)==0)
	printf("String is a palindrome.");
	else
	printf("Strings is not a palindrome.");
}
