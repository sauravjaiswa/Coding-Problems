#include<stdio.h>
#include<conio.h>
#include<string.h>
int pos(char *s1,char *s2);
int main()
{
	char str1[20],str2[20];
	printf("Enter string 1:");
    gets(str1);
	printf("Enter string 2:");
    gets(str2);
    int p=pos(str1,str2);
    printf("%d",p);
}
int pos(char *s1,char *s2)
{
	int l1,l2,i,j,x,c=0,z=0;
	l1=strlen(s1);
	l2=strlen(s2);
	x=l2-1;
	for(i=l1-1;i>=0;i--)
	{
		if(*(s2+x--)==*(s1+i))
		{
			c++;
			if(c==l2)
			{
				j=i;
				break;
			}
		}
		else
		{
			c=0;
			x=l2-1;
		}
	}
	for(i=j;i>=0;i--)
	{
		if(*(s2+x--)==*(s1+i))
		{
			c++;
			if(c==l2)
			return (i+l2); 
		}
		else
		{
			c=0;
			x=l2-1;
		}
	}
}
