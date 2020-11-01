//reverse string
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{	
    int i,j;
	char s1[]="hello";
	char tmp;
	i=0;
	j=strlen(s1)-1;
	while(i!=j)
	{
		tmp=s1[i];
		s1[i]=s1[j];
		s1[j]=tmp;
		i++;
		j--;
	}
	puts(s1);
}
